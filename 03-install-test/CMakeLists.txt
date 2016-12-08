cmake_minimum_required(VERSION 2.6)
project(03-install-test)

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

add_executable(03-install-test main.cpp)
target_link_libraries(03-install-test ${EXTRA_LIBS})

set(CMAKE_INSTALL_PREFIX "${PROJECT_SOURCE_DIR}/../programs")

install(TARGETS 03-install-test DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/config.h" DESTINATION include)