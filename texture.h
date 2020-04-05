//
// Created by sam on 3/28/20.
//

#ifndef ARCTON_0_1_1_TEXTURE_H
#define ARCTON_0_1_1_TEXTURE_H
#include <string>
#include <GL/glew.h>


class Texture {
public:
    Texture(const std::string& file_name);
    void Bind(unsigned int unit);
    virtual ~Texture();

private:

    GLuint texture_;


};


#endif //ARCTON_0_1_1_TEXTURE_H
