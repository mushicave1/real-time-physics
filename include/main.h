#ifndef REAL_TIME_PHYSICS_MAIN_H
#define REAL_TIME_PHYSICS_MAIN_H

#include <stdio.h>
#include <stdbool.h>
#include "glad/gl.h"


struct gl_object {
    GLuint vbo;
    GLuint ebo;
    GLuint vao;
    GLuint program;
    size_t draw_count;
    GLuint draw_method;
    bool init;
};


struct scene_object {
    struct gl_object *renderable;
    float position[3];
    float size[3];
};


void init_square(struct gl_object * obj);
void draw_square(struct scene_object * obj, bool draw_indexed);


#endif 