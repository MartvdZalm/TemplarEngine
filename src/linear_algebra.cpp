#include "linear_algebra.h"

glm::mat4 createTranslationTransform(glm::vec3 translation)
{
	glm::mat4 matrix(1.0f);  // Start with an identity matrix (all 1s on the diagonal)

	// Manually set the translation values (last column of the matrix)
    matrix[3][0] = translation.x;  // Translation in x
    matrix[3][1] = translation.y;  // Translation in y
    matrix[3][2] = translation.z;  // Translation in z

    return matrix;
}


