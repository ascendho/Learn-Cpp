#ifndef OPERATOR_OVERLOADING_POINT_H
#define OPERATOR_OVERLOADING_POINT_H


class Point {
public:
    bool operator==(const Point &other) const;

    Point(int x, int y);

    int getX() const;

    int getY() const;

    void setX(int x);

    void setY(int y);

private:
    int x;
    int y;


};


#endif //OPERATOR_OVERLOADING_POINT_H
