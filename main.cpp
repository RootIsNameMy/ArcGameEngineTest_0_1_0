#include <iostream>
#include <GL/glew.h>
#include "display.h"
#include "shader.h"
#include "mesh.h"
#include "texture.h"
#include "transform.h"
#include <math.h>
#include "camera.h"

int main() {
    Display display(640, 640, "Arcton version 0.1.1");

    Shader shader("../shaders/basicShader");


    Vertex vertices1[] = {
            //front
            Vertex(Vec3(-0.5, -0.5, -0.5), Vec2(0, 1), Vec3(-0.5, -0.5, -0.5)),//0
            Vertex(Vec3(-0.5, 0.5, -0.5), Vec2(0, 0),Vec3(-0.5, 0.5, -0.5)),//1
            Vertex(Vec3(0.5, 0.5, -0.5), Vec2(1, 0),Vec3(0.5, 0.5, -0.5)),//2
            Vertex(Vec3(0.5, -0.5, -0.5), Vec2(1, 1),Vec3(0.5, -0.5, -0.5)),//3
            Vertex(Vec3(-0.5, -0.5, 0.5), Vec2(0, 0),Vec3(-0.5, -0.5, 0.5)),//4
            Vertex(Vec3(-0.5, 0.5, 0.5), Vec2(0, 1),Vec3(-0.5, 0.5, 0.5)),//5
            Vertex(Vec3(0.5, 0.5, 0.5), Vec2(1, 1),Vec3(0.5, 0.5, 0.5)),//6
            Vertex(Vec3(0.5, -0.5, 0.5), Vec2(1, 0),Vec3(0.5, -0.5, 0.5)),//7

            Vertex(Vec3(-0.5, -0.5, 0.5), Vec2(1, 1),Vec3(-0.5, -0.5, 0.5)),//4* -> 8
            Vertex(Vec3(-0.5, 0.5, 0.5), Vec2(1, 0),Vec3(-0.5, 0.5, 0.5)),//5* -> 9

            Vertex(Vec3(0.5, 0.5, 0.5), Vec2(0, 0),Vec3(0.5, 0.5, 0.5)),//6* -> 10
            Vertex(Vec3(0.5, -0.5, 0.5), Vec2(0, 1),Vec3(0.5, -0.5, 0.5)),//7* -> 11



    };


    unsigned int indices[] = {0,1,2,0,2,3,
                              3,2,10,3,10,11,
                              1,5,6,1,6,2,
                              8,9,1,8,1,0,
                              7,6,5,7,5,4,
                              3,7,4,3,4,0};


    Mesh mesh1(vertices1, sizeof(vertices1) / sizeof(vertices1[0]), indices, sizeof(indices)/ sizeof(indices[0]));

    //Mesh mesh2(vertices1, sizeof(vertices1) / sizeof(vertices1[0]), indices, sizeof(indices)/ sizeof(indices[0]), Transform(glm::vec3(1,0,0)));

    Texture texture("../res/bricks.jpg");

    //Transform transform(glm::vec3(0,0,0));

    Camera camera(glm::vec3(1,0,-3), 70.0f, (float)display.width()/display.height(), 0.01f, 1000.0f);

    double counter = 0.0;
    while (!display.is_closed()) {
        display.Clear(0.0f, 0.15f, 0.3f, 1.0f);

        shader.Bind();
        texture.Bind(0);
        mesh1.Draw();
        //mesh2.Draw();
        //transform.setPos(glm::vec3(0, 0, 10*cos(counter)/2));
        //transform.setRot(glm::vec3(-counter,-counter,-counter));
        //transform.setScale(glm::vec3(abs(cos(counter*2)*0.25)+0.75,abs(cos(counter*2)*0.25)+0.75,abs(cos(counter*2)*0.25)+0.75));
        shader.Update( camera);
        display.Update(camera);
        counter+=0.01;
    }
    return 0;
}
