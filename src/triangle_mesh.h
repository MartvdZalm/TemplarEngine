#include "config.h"

#ifndef TRIANGLE_MESH
#define TRIANGLE_MESH

class TriangleMesh
{
public:
	TriangleMesh();
	~TriangleMesh();
	void draw();

private:
	GLuint vertexArrayID;
	GLuint vertexBuffer;
};

#endif
