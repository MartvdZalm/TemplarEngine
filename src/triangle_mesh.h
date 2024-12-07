#ifndef TRIANGLE_MESH_H
#define TRIANGLE_MESH_H

#include <GL/glew.h>
#include <glm/glm.hpp>

class TriangleMesh {
public:
    TriangleMesh();
    ~TriangleMesh();
    void draw();

private:
    GLuint vertexArrayID;
    GLuint vertexBuffer;
};

#endif // TRIANGLE_MESH_H
