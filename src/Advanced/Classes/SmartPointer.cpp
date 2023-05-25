#include "SmartPointer.h"


SmartPointer::~SmartPointer() {
    delete ptr;
    ptr= nullptr;

}

SmartPointer::SmartPointer(int *ptr) : ptr(ptr) {

}
