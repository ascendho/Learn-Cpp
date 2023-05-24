#ifndef CLASSES_RECTANGLE_H
#define CLASSES_RECTANGLE_H

#include <string>

using namespace std;

class Rectangle {

public:

    Rectangle(int width, int height);

    Rectangle(int width, int height, const string &color);
//    Rectangle(int width, int height, const string &color)=delete;

    Rectangle() = default;

    Rectangle(const Rectangle &source);

    void draw() const;

    int getArea() const;

    int getWidth() const;

    int getHeight() const;

    void setWidth(int width);


    void setHeight(int height);

    const string &getColor() const;

    void setColor(const string &color);

    virtual ~Rectangle();

    static int getObjectsCount();


private:
    int width = 0;
    int height = 0;
    string color;

    static int objectsCount;

};


#endif //CLASSES_RECTANGLE_H
