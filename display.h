
#include<string>
#include <iostream>
#include <SDL2/SDL.h>
#include "camera.h"
#include "transform.h"

#ifndef ARCTON_0_1_1_DISPLAY_H
#define ARCTON_0_1_1_DISPLAY_H


class Display {
public:
    Display(int width, int height, const std::string &title);

    virtual ~Display();


    bool is_closed();

    void Update(Camera& camera, Transform &transform);

    void Clear(float r, float g, float b, float a);

    int height() const;

    int width() const;


private:
    int height_;
    int width_;
    SDL_Window* window_;
    SDL_GLContext gl_context_;
    bool is_closed_;
    int prev_x_;
    int prev_y_;

};


#endif
