//
// Created by sam on 3/28/20.
//

#ifndef ARCTON_0_1_1_MESH_H
#define ARCTON_0_1_1_MESH_H

#include<glm/glm.hpp>
#include<GL/glew.h>
#include "transform.h"

struct Vec3{
    float x, y, z;
    Vec3(float x, float y, float z) : x(x), y(y), z(z) {}
};

struct Vec2{
    float x, y;
    Vec2(float x, float y) : x(x), y(y) {}
};

class Vertex{
public:
    Vertex(const Vec3 &pos, const Vec2 &tex_coord, const Vec3 &normal) : pos_(pos), tex_coord_(tex_coord), normal_(normal){
    }
    Vertex() : pos_(Vec3(0,0,0)), tex_coord_(Vec2(0,0)), normal_(Vec3(0,0,0)){
    }
    void setPos(const Vec3 &pos){
        this->pos_ = pos;
    }
    Vec3* pos() {return &pos_;}
    Vec2* tex_coord() {return &tex_coord_;}

    Vec3* normal() {
        return &normal_;
    }

    int transform_id() {
        return transform_id_;
    }

    void setTransformId(int transformId) {
        transform_id_ = transformId;
    }

private:
    Vec3 pos_;
    Vec2 tex_coord_;
    Vec3 normal_;
    int transform_id_;
};


class Mesh {
public:
    Mesh(Vertex* vertices, unsigned int numVertices, unsigned int* indices, unsigned int num_ndices, const Transform& transform = Transform());
    virtual ~Mesh();

    void Draw();

private:
    static int transformId;
    enum{
        POSITION_VB,
        TEXCOORD_VB,
        INDEX_VB,
        NORMAL_VB,
        TRANSFORM_ID_VB,
        NUM_BUFFERS
    };
    GLuint vertex_array_object_;
    GLuint vertex_array_buffers_[NUM_BUFFERS];
    unsigned int draw_count_;
    Transform transform_;



};



#endif //ARCTON_0_1_1_MESH_H
