#include "Length.h"


Length::Length(int value) : value(value) {}

bool Length::operator==(const Length &other) const {
    return value == other.value;
}

bool Length::operator==(int other) const {
    return value == other;
}

bool Length::operator<(const Length &other) const {
    return value < other.value;
}

bool Length::operator<=(const Length &other) const {
    return !(value > other.value);
}

bool Length::operator>(const Length &other) const {
    return value > other.value;
}

bool Length::operator>=(const Length &other) const {
    return !(value < other.value);
}

std::strong_ordering Length::operator<=>(const Length &other) const {
    return value <=> other.value;
}

int Length::getValue() const {
    return value;
}

void Length::setValue(int value) {
    Length::value = value;
}

ostream &operator<<(ostream &stream, const Length &length) {
    stream << length.getValue();
    return stream;
}

Length Length::operator+(const Length &other) const {

    return Length(value + other.value);
}

Length &Length::operator+=(const Length &other) {
    value += other.value;
    return *this;
}

Length &Length::operator=(const Length &other) {
    value = other.value;
    return *this;
}

istream &operator>>(istream &stream, Length &length) {
    int value;
    stream >> value;
    length.setValue(value);
    return stream;
}
