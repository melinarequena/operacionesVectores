cmake_minimum_required(VERSION 3.24)
project(operacionesVectores C)

set(CMAKE_C_STANDARD 11)

add_executable(operacionesVectores main.c operaciones.c operaciones.h)
