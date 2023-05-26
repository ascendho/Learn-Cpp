#ifndef OPERATOR_OVERLOADING_LENGTH_H
#define OPERATOR_OVERLOADING_LENGTH_H

#include <compare>

class Length {


private:
    int value;
public:
    explicit Length(int value);

    bool operator==(const Length &other) const;

    bool operator==(int other) const;

    bool operator<(const Length &other) const;

    bool operator<=(const Length &other) const;

    bool operator>(const Length &other) const;

    bool operator>=(const Length &other) const;

    std::strong_ordering operator<=>(const Length &other) const;


};


#endif //OPERATOR_OVERLOADING_LENGTH_H
