#version 120

varying vec2 tex_coord0;
varying vec3 normal0;

uniform sampler2D diffuse;



void main(){
    gl_FragColor = texture2D(diffuse, tex_coord0) *
            (clamp(dot(-vec3(0,0,1), normal0),0.0, 1.0) *0.9 + 0.1);

}