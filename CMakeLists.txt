cmake_minimum_required(VERSION 3.27)
project(calculateur_ip C)

set(CMAKE_C_STANDARD 11)

include_directories(includes)
include_directories(src)

add_executable(calculateur_ip
        includes/ip_calcul.h
        src/ip_calcul.c
        src/ip_utils.c
        src/main.c
        includes/ip_utils.h
)
