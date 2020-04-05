cmake_minimum_required(VERSION 3.15)
project(arcton_0_1_1)



set(CMAKE_CXX_STANDARD 14)

add_executable(arcton_0_1_1 main.cpp display.cpp display.h shader.cpp shader.h mesh.cpp mesh.h stb_image.c stb_image.h texture.cpp texture.h transform.h camera.h)
find_package(SDL2 REQUIRED)
find_package(GLEW REQUIRED)
find_package(OpenGL REQUIRED)
include_directories(arcton_0_1_1 ${SDL2_INCLUDE_DIRS})
include_directories(arcton_0_1_1 ${GLEW_INCLUDE_DIRS})
include_directories(arcton_0_1_1 ${OpenGL_INCLUDE_DIRS})
target_link_libraries(arcton_0_1_1 ${OPENGL_LIBRARIES} ${GLEW_LIBRARIES} ${SDL2_LIBRARIES})