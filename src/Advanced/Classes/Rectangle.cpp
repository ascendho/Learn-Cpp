#include "Rectangle.h"
#include <iostream>

using namespace std;

void Rectangle::draw() const{
    cout << "Drawing a rectangle" << endl;
    cout << "Dimensions: " << width << ", " << height << endl;
}

int Rectangle::getArea() const{
    return width * height;
}

int Rectangle::getWidth() const {
    return width;
}

void Rectangle::setWidth(int width) {
    if (width < 0)
        throw invalid_argument("width");

    Rectangle::width = width;
}

int Rectangle::getHeight() const {
    return height;
}

void Rectangle::setHeight(int height) {
    if (height < 0)
        throw invalid_argument("height");

    Rectangle::height = height;
}

//Rectangle::Rectangle(int width, int height) : width{width}, height{height} {
//
//}

Rectangle::Rectangle(int width, int height) {
    objectsCount++;
    setWidth(width);
    setHeight(height);
}

Rectangle::Rectangle(int width, int height, const string &color) : Rectangle(width, height) {
    this->color = color;
}

Rectangle::Rectangle(const Rectangle &source) {
    cout << "Copied!" << endl;
    this->height = source.height;
    this->width = source.width;
    this->color = source.color;
}

const string &Rectangle::getColor() const {
    return color;
}

void Rectangle::setColor(const string &color) {
    Rectangle::color = color;
}

Rectangle::~Rectangle() {
//    cout << "Destructor is called!" << endl;
}


int Rectangle::objectsCount=0;

int Rectangle::getObjectsCount() {
    return objectsCount;
}
