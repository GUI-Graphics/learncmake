cmake_minimum_required(VERSION 2.6)
project(02-add-library)

option(USE_MY_SUM "use mysum library" ON)

if(USE_MY_SUM)
	include_directories("${PROJECT_SOURCE_DIR}/mysum")
	add_subdirectory(mysum)
	set(EXTRA_LIBS ${EXTRA_LIBS} mysum)
endif()

configure_file(
	"${PROJECT_SOURCE_DIR}/config.h.in"
	"${PROJECT_BINARY_DIR}/config.h"
)

include_directories(${PROJECT_BINARY_DIR})

add_executable(02-add-library main.cpp)
target_link_libraries(02-add-library ${EXTRA_LIBS})