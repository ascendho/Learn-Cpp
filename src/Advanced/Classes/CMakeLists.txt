cmake_minimum_required(VERSION 3.25)
project(Classes)

set(CMAKE_CXX_STANDARD 20)

add_executable(Classes main.cpp Rectangle.cpp Rectangle.h TextBox.cpp TextBox.h Person.cpp Person.h SmartPointer.cpp SmartPointer.h)
