cmake_minimum_required(VERSION 2.6)
project(config_file)

set(VERSION_MAJOR 2)
set(VERSION_MINOR 3)

configure_file(
	"${PROJECT_SOURCE_DIR}/config.h.in"
	"${PROJECT_BINARY_DIR}/config.h"
)

include_directories(${PROJECT_BINARY_DIR})
add_executable(configure_file main.cpp)