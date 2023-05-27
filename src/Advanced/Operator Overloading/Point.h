#ifndef OPERATOR_OVERLOADING_POINT_H
#define OPERATOR_OVERLOADING_POINT_H

#include <ostream>

using namespace std;

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

ostream &operator<<(ostream &stream, const Point &point);


#endif //OPERATOR_OVERLOADING_POINT_H
