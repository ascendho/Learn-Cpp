#ifndef CLASSES_TEXTBOX_H
#define CLASSES_TEXTBOX_H

#include<iostream>

using namespace std;

class TextBox {
private:
    string value;

public:
    const string &getValue() const;

    void setValue(const string &value);

    TextBox() = default;

    explicit TextBox(const string& val);


};


#endif //CLASSES_TEXTBOX_H
