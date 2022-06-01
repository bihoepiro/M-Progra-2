cmake_minimum_required(VERSION 3.20)
project(ETeoria)

set(CMAKE_CXX_STANDARD 14)

add_executable(ETeoria main.cpp CCliente.cpp CCliente.h CPizza.cpp CPizza.h CTrattoria.cpp CTrattoria.h)
