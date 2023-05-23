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

    Rectangle(const Rectangle& source);

    void draw();

    int getArea();

    int getWidth() const;

    void setWidth(int width);

    int getHeight() const;

    void setHeight(int height);

    const string &getColor() const;

    void setColor(const string &color);

    virtual ~Rectangle();

private:
    int width = 0;
    int height = 0;
    string color;


};


#endif //CLASSES_RECTANGLE_H
