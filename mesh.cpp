//
// Created by sam on 3/28/20.
//

#include "mesh.h"
#include <vector>

int Mesh::transformId = 0;

Mesh::Mesh(Vertex* vertices, unsigned int num_vertices, unsigned int* indices, unsigned int num_indices, const Transform& transform): draw_count_(num_indices), transform_(transform) {
    glGenVertexArrays(1,&vertex_array_object_);
    glBindVertexArray(vertex_array_object_);

    std::vector<Vec3> positions;
    std::vector<Vec2> tex_coords;
    std::vector<Vec3> normals;
    std::vector<int> transform_ids;

    positions.reserve(num_vertices);
    tex_coords.reserve(num_vertices);
    normals.reserve(num_vertices);
    transform_ids.reserve(num_vertices);



    for(int i=0;i<num_vertices;++i){
        positions.emplace_back(*vertices[i].pos());
        tex_coords.emplace_back(*vertices[i].tex_coord());
        normals.emplace_back(*vertices[i].normal());
        transform_ids.emplace_back(transformId);

    }
    transformId++;

    glGenBuffers(NUM_BUFFERS, vertex_array_buffers_);
    glBindBuffer(GL_ARRAY_BUFFER, vertex_array_buffers_[POSITION_VB]);
    glBufferData(GL_ARRAY_BUFFER, num_vertices * sizeof(positions[0]), &positions[0], GL_STATIC_DRAW);

    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0,3,GL_FLOAT, GL_FALSE, 0, 0);


    glBindBuffer(GL_ARRAY_BUFFER, vertex_array_buffers_[TEXCOORD_VB]);
    glBufferData(GL_ARRAY_BUFFER, num_vertices * sizeof(tex_coords[0]), &tex_coords[0], GL_STATIC_DRAW);

    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1,2,GL_FLOAT, GL_FALSE, 0, 0);


    glBindBuffer(GL_ARRAY_BUFFER, vertex_array_buffers_[NORMAL_VB]);
    glBufferData(GL_ARRAY_BUFFER, num_vertices * sizeof(normals[0]), &normals[0], GL_STATIC_DRAW);

    glEnableVertexAttribArray(2);
    glVertexAttribPointer(2,3,GL_FLOAT, GL_FALSE, 0, 0);

    glBindBuffer(GL_ARRAY_BUFFER, vertex_array_buffers_[TRANSFORM_ID_VB]);
    glBufferData(GL_ARRAY_BUFFER, num_vertices * sizeof(transform_ids[0]), &transform_ids[0], GL_STATIC_DRAW);

    glEnableVertexAttribArray(3);
    glVertexAttribPointer(3,1,GL_INT, GL_FALSE, 0, 0);


    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, vertex_array_buffers_[INDEX_VB]);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, num_indices* sizeof(indices[0]), indices, GL_STATIC_DRAW);



    glBindVertexArray(0);
}

Mesh::~Mesh() {
    glDeleteVertexArrays(1, &vertex_array_object_);
}

void Mesh::Draw() {
    glBindVertexArray(vertex_array_object_);

    glDrawElements(GL_TRIANGLES, draw_count_,GL_UNSIGNED_INT, 0 );
    //glDrawArrays(GL_TRIANGLES, 0, draw_count_);

    glBindVertexArray(0);
}


