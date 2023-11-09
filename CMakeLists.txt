cmake_minimum_required(VERSION 3.24)

project(dynamic_loading)

add_executable(app
	"src/main.cpp"
)

add_library(script_lib MODULE
	"src/script_lib.cpp"
  "src/script_lib.h")

add_dependencies(app script_lib)
