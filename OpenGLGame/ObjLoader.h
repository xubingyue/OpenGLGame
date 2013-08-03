#ifndef _OBJ_LOADER_H_
#define _OBJ_LOADER_H_

#include <vector>
#include <glm\glm.hpp>

class OBJLoader
{
public:
	static bool LoadObj(const char* path, std::vector<glm::vec3>& out_vertices, std::vector<glm::vec2>& out_uvs, std::vector<glm::vec3>& out_normals, unsigned int* numFaces);
};
#endif