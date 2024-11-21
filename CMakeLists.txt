cmake_minimum_required(VERSION 3.29)
project(quadrtato C)

set(CMAKE_C_STANDARD 11)

add_executable(quadrtato main.c
        "funzione quadrato.c"
        "funzione quadrato.h")
