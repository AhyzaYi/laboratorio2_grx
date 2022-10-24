cmake_minimum_required(VERSION 3.24.2)

project(laboratorio2)

include_directories(include)


set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/archivos)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set (SOURCES src/main.c src/files_ops1.c src/funciones_grx.c)

add_executable(laboratorio2_grx.bin ${SOURCES})

