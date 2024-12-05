cmake_minimum_required(VERSION 3.0.0)
project(TemplarEngine VERSION 1.0.0)
cmake_policy(SET CMP0072 NEW)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

add_executable(TemplarEngine 
	src/config.h
	src/config.cpp
	src/main.cpp
	src/glad.c
	src/triangle_mesh.cpp
	src/triangle_mesh.h
	src/material.cpp
)

target_include_directories(TemplarEngine
	PRIVATE
	dependencies
)

target_link_libraries(TemplarEngine
	glfw
	OpenGL::GL
)