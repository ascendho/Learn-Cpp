#ifndef CLASSES_RECTANGLE_H
#define CLASSES_RECTANGLE_H


class Rectangle {

public:
    Rectangle(int width, int height);

    Rectangle() = default;

    void draw();

    int getArea();

    int getWidth() const;

    void setWidth(int width);

    int getHeight() const;

    void setHeight(int height);

private:
    int width = 0;
    int height = 0;

};


#endif //CLASSES_RECTANGLE_H
