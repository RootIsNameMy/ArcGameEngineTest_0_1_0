//
// Created by sam on 3/29/20.
//

#ifndef ARCTON_0_1_1_CAMERA_H
#define ARCTON_0_1_1_CAMERA_H
#include <glm/glm.hpp>
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/gtx/transform.hpp>
class Camera{
public:
    Camera(glm::vec3 position, float fov, float aspect, float z_near, float z_far) {
        perspective_ = glm::perspective(fov, aspect, z_near, z_far);
        position_ = position;
        forward_ = glm::vec3(1,0,120);
        up_=glm::vec3(0,1,0);
    }
    inline glm::mat4 GetViewProjection() const{
        return perspective_ * glm::lookAt(position_,position_+forward_, up_);
    }

    virtual ~Camera() {

    }

    void setForward(const glm::vec3 &forward) {
        forward_ = forward;
    }

private:
    glm::mat4 perspective_;
    glm::vec3 position_;
    glm::vec3 forward_;
    glm::vec3 up_;
};
#endif //ARCTON_0_1_1_CAMERA_H
