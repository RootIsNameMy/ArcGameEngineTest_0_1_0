//
// Created by sam on 3/29/20.
//

#ifndef ARCTON_0_1_1_TRANSFORM_H
#define ARCTON_0_1_1_TRANSFORM_H

#include <glm/glm.hpp>
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/gtx/transform.hpp>

class Transform {
public:
    Transform(const glm::vec3 &pos = glm::vec3(), const glm::vec3 &rot = glm::vec3(),
              const glm::vec3 &scale = glm::vec3(1.0f, 1.0f, 1.0f)) :
            pos_(pos), rot_(rot), scale_(scale) {
    }

    inline glm::mat4 GetModel() const{
        glm::mat4 pos_matrix = glm::translate(pos_);

        glm::mat4 rot_x_matrix = glm::rotate(rot_.x, glm::vec3(1,0,0));
        glm::mat4 rot_y_matrix = glm::rotate(rot_.y, glm::vec3(0,1,0));
        glm::mat4 rot_z_matrix = glm::rotate(rot_.z, glm::vec3(0,0,1));
        glm::mat4 scale_matrix = glm::scale(scale_);

        glm::mat4 rot_matrix = rot_z_matrix * rot_y_matrix * rot_x_matrix;

        return pos_matrix * rot_matrix * scale_matrix;
    }

    const glm::vec3 &pos() const {
        return pos_;
    }

    const glm::vec3 &rot() const {
        return rot_;
    }

    const glm::vec3 &scale() const {
        return scale_;
    }

    void setPos(const glm::vec3 &pos) {
        pos_ = pos;
    }

    void setRot(const glm::vec3 &rot) {
        rot_ = rot;
    }

    void setScale(const glm::vec3 &scale) {
        scale_ = scale;
    }

    virtual ~Transform() {

    }

public:
    glm::vec3 pos_;
    glm::vec3 rot_;
    glm::vec3 scale_;

};


#endif //ARCTON_0_1_1_TRANSFORM_H
