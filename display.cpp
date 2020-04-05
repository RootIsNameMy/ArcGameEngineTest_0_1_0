
#include "display.h"
#include "camera.h"
#include <GL/glew.h>

Display::Display( int width,int height, const std::string &title) : height_(height), width_(width), is_closed_(false), prev_x_(0), prev_y_(0) {
    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_GL_SetAttribute(SDL_GL_RED_SIZE,8);
    SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE,8);
    SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE,8);
    SDL_GL_SetAttribute(SDL_GL_ALPHA_SIZE,8);
    SDL_GL_SetAttribute(SDL_GL_BUFFER_SIZE,32);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE,16);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER,1);

    window_ = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_OPENGL);

    gl_context_ = SDL_GL_CreateContext(window_);

    GLenum status = glewInit();

    if(status != GLEW_OK){
        std::cout << "GLEW failed to initialize!!\n";
    }

    glEnable(GL_DEPTH_TEST);


    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);
}

Display::~Display() {
    SDL_GL_DeleteContext(gl_context_);
    SDL_DestroyWindow(window_);
    SDL_Quit();
}

void Display::Update(Camera& camera, Transform &transform) {
    SDL_GL_SwapWindow(window_);

    SDL_Event e;

    while(SDL_PollEvent(&e)){
        if(e.type == SDL_QUIT){
            is_closed_=true;
        }
        else if(e.type == SDL_KEYDOWN){
            switch (e.key.keysym.sym) {
                case SDLK_RIGHT:
                    
                    break;
                case SDLK_LEFT:
                    break;
            }

        }
    }

}
bool Display::is_closed() {
    return is_closed_;
}

void Display::Clear(float r, float g, float b, float a) {
    glClearColor(r,g, b,a);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

int Display::height() const {
    return height_;
}

int Display::width() const {
    return width_;
}

