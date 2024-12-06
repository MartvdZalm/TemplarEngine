#include "config.h"

class TriangleMesh
{
public:
	TriangleMesh();
	~TriangleMesh();
	void draw();

private:
	unsigned int EBO, VBO, VAO, element_count;
};