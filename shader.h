//
// Created by sam on 3/28/20.
//

#ifndef ARCTON_0_1_1_SHADER_H
#define ARCTON_0_1_1_SHADER_H
#include <string>
#include <GL/glew.h>
#include "transform.h"
#include "camera.h"

class Shader {
public:
    Shader(const std::string fileName);
    virtual ~Shader();

    void Bind();
    void Update( const Camera& camera);

private:
    static const unsigned int NUM_SHADERS = 2;

    enum{
        CAM_TRANSFORM_U,
        NUM_UNIFORMS
    };

    GLuint  program_;
    GLuint shaders_[NUM_SHADERS];
    GLuint uniforms_[NUM_UNIFORMS];
};


#endif //ARCTON_0_1_1_SHADER_H
