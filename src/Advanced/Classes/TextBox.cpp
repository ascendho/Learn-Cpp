#include "TextBox.h"

const string &TextBox::getValue() const {
    return value;
}

void TextBox::setValue(const string &value) {
    TextBox::value = value;
}

TextBox::TextBox(const string &val) : value{val} {

}


