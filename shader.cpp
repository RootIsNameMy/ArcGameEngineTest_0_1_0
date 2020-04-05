//
// Created by sam on 3/28/20.
//

#include <fstream>
#include <iostream>
#include "shader.h"

static void CheckShaderError(GLuint shader, GLuint flag, bool isProgram, const std::string &errorMessage);

static std::string LoadShader(const std::string &fileName);

static GLuint CreateShader(const std::string& text, GLenum shaderType);


Shader::Shader(const std::string fileName) {
    program_ = glCreateProgram();
    shaders_[0] = CreateShader(LoadShader(fileName + ".vs"), GL_VERTEX_SHADER);
    shaders_[1] = CreateShader(LoadShader(fileName + ".fs"), GL_FRAGMENT_SHADER);

    for(unsigned int i=0; i<NUM_SHADERS;++i){
        glAttachShader(program_, shaders_[i]);
    }
    glBindAttribLocation(program_, 0, "position");
    glBindAttribLocation(program_, 1, "tex_coord");
    glBindAttribLocation(program_, 2, "normal");
    glBindAttribLocation(program_,3, "transform_id");



    glLinkProgram(program_);
    CheckShaderError(program_, GL_LINK_STATUS, true, "Error: Program failed to link");

    glValidateProgram(program_);
    CheckShaderError(program_, GL_VALIDATE_STATUS, true, "Error: Program is invalid");

    uniforms_[CAM_TRANSFORM_U] = glGetUniformLocation(program_, "cam_transform");
}

Shader::~Shader() {
    for(unsigned int i=0; i<NUM_SHADERS;++i){
        glDetachShader(program_, shaders_[i]);
        glDeleteShader(shaders_[i]);
    }
    glDeleteProgram(program_);
}

void Shader::Bind() {
    glUseProgram(program_);
}

void Shader::Update(const Camera &camera) {
    glm::mat4 model = camera.GetViewProjection();// * transform.GetModel();
    glUniformMatrix4fv(uniforms_[CAM_TRANSFORM_U],1,GL_FALSE,&model[0][0]);
}

static GLuint CreateShader(const std::string& text, GLenum shaderType){
    GLuint shader = glCreateShader(shaderType);

    if(shader == 0){
        std::cerr << "Error: Shader creation failed!" << std::endl;
    }

    const GLchar* shaderSourceStrings[1];

    GLint shaderSourceStringLengths[1];

    shaderSourceStrings[0] = text.c_str();
    shaderSourceStringLengths[0] = text.length();

    glShaderSource(shader, 1, shaderSourceStrings, shaderSourceStringLengths);

    glCompileShader(shader);

    CheckShaderError(shader,GL_COMPILE_STATUS, false, "Error: Shader failed to compile");

    return shader;
}

static std::string LoadShader(const std::string &fileName) {
    std::ifstream file;
    file.open(fileName.c_str());

    std::string output;
    std::string line;

    if (file.is_open()) {
        while (file.good()) {
            getline(file, line);
            output.append(line + '\n');
        }
        file.close();
    } else {
        std::cerr << "Unable to load shader: " << fileName << std::endl;
    }
    return output;
}

static void CheckShaderError(GLuint shader, GLuint flag, bool isProgram, const std::string &errorMessage) {
    GLint success = 0;
    GLchar error[1024];

    if (isProgram) {
        glGetProgramiv(shader, flag, &success);
    } else {
        glGetShaderiv(shader, flag, &success);
    }

    if (success == GL_FALSE) {
        if (isProgram) {
            glGetProgramInfoLog(shader, sizeof(error), NULL, error);
        } else {
            glGetShaderInfoLog(shader, sizeof(error), NULL, error);
        }

        std::cerr << errorMessage << ": '" << error << "'" << std::endl;
    }
}
