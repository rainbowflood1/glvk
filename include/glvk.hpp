// HEADERS
#include <vulkan/vulkan.h>

// DEFINES

#define GL_VERTEX_SHADER 0x8B31
#define GL_FRAGMENT_SHADER 0x8B30
// DRAW SETTINGS
#define GL_STATIC_DRAW 0x88E4
#define GL_STATIC_READ 0x88E5
#define GL_STATIC_COPY 0x88E6
#define GL_DYNAMIC_DRAW 0x88E8
#define GL_DYNAMIC_READ 0x88E9
#define GL_DYNAMIC_COPY 0x88EA
#define GL_STREAM_DRAW 0x88E0
#define GL_STREAM_READ 0x88E1
#define GL_STREAM_COPY 0x88E2


// TYPES

typedef unsigned int GLuint;
typedef int GLsizei;

typedef unsigned int GLenum;

typedef signed size_t GLsizeiptr;
typedef intptr_t GLintptr;

typedef char GLchar;

// FUNCTIONS

// These functions are needed to initalize Vulkan, this is not part of standard OpenGL

// VULKAN VARIABLES

void glInit() {
    // Used to initalise Vulkan

    
}
void glUnload() {

}

// OPENGL FUNCTIONS
// Some of them are not finished
// BUFFERS
void glGenBuffers(GLsizei n, GLuint *buffers) {

}

void glBindBuffer(GLenum target, GLint buffer) {

}

void glBufferData(GLenum target, GLsizeiptr size, const void* data, GLenum usage) {

}
// SHADERS
GLuint glCreateShader(GLenum type) {

}

void glShaderSource(GLuint shader, GLsizei count, GLchar** string, const GLint* length) {

}

void glAttachShader(GLuint program, GLuint shader) {

}
// PROGRAMS
GLuint glCreateProgram() {

}

void glLinkProgram(GLuint program) {

}
// Viewport
void glViewport(GLint x, GLint y, GLsizei width, GLsizei height) {

}