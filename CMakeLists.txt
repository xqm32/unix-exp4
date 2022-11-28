cmake_minimum_required(VERSION 3.16)
project(PROJECT_NAME)

include_directories(include)
aux_source_directory(src SRC)

add_compile_options(-std=c17 -g)

link_libraries(m)
add_library(methods SHARED src/methods.c)

add_executable(main src/main.c)
target_link_libraries(main methods)
