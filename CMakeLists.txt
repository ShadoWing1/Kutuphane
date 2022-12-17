cmake_minimum_required(VERSION 3.23)

set(CMAKE_BUILD_TYPE DEBUG)

set(CMAKE_CXX_STANDAR 20)

get_filename_component(DIR ${CMAKE_SOURCE_DIR} NAME)

project(${DIR})
#  project(proje adı)

file(GLOB PROJECT_SOURCES "${CMAKE_SOURCE_DIR}/src/*.cpp" "${CMAKE_SOURCE_DIR}/src/*.c")

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE "${CMAKE_SOURCE_DIR}/include")
target_link_libraries(${PROJECT_NAME} glfw)
