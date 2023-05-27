#ifndef OPERATOR_OVERLOADING_LENGTH_H
#define OPERATOR_OVERLOADING_LENGTH_H

#include <compare>
#include <ostream>
#include <istream>

using namespace std;

class Length {

public:
    explicit Length(int value);

    Length()=default;

    bool operator==(const Length &other) const;

    bool operator==(int other) const;

    bool operator<(const Length &other) const;

    bool operator<=(const Length &other) const;

    bool operator>(const Length &other) const;

    bool operator>=(const Length &other) const;

    Length operator+(const Length &other) const;

    Length &operator+=(const Length &other);

    Length& operator=(const Length& other);

    strong_ordering operator<=>(const Length &other) const;

    int getValue() const;

    void setValue(int value);

private:
    int value;
    int privateVar;

    friend ostream &operator<<(ostream &stream, const Length &length);


};

ostream &operator<<(ostream &stream, const Length &length);

istream &operator>>(istream &stream, Length &length);


#endif //OPERATOR_OVERLOADING_LENGTH_H
