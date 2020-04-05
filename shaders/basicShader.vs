#version 120
attribute vec3 position;
attribute vec2 tex_coord;
attribute vec3 normal;
attribute int transform_id;



varying vec2 tex_coord0;
varying vec3 normal0;

uniform mat4 cam_transform;

void main(){

    gl_Position = cam_transform * vec4(position, 1.0);
    if(transform_id == 1){
        tex_coord0 = vec2(0,0);
    }
    else{
        tex_coord0 = tex_coord;
    }


    normal0 = (vec4(normal, 0.0)).xyz;
}