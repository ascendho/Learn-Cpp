#include <iostream>
#include <memory>
#include "Rectangle.h"
#include "TextBox.h"
#include "Person.h"
#include "SmartPointer.h"

using namespace std;

void showPerson(Person);

void showRectangle(Rectangle);

int main() {

    // Defining a Class
    cout << "Defining a Class" << endl;

    cout << "--------" << endl;

    // Creating Objects
    cout << "Creating Objects" << endl;

//    Rectangle first;
//    Rectangle second;
//
//    cout << &first << endl;
//    cout << &second << endl;

    cout << "--------" << endl;

    // Access Modifiers
    cout << "Access Modifiers" << endl;


    cout << "--------" << endl;

    // Getters and Setters
    cout << "Getters and Setters" << endl;

//    first.setWidth(-1);

    TextBox box;
    box.setValue("Hello World");
    cout << box.getValue() << endl;

    cout << "--------" << endl;

    // Constructors
    cout << "Constructors" << endl;

    Rectangle rectangle{10, 20};
    cout << rectangle.getWidth() << endl;

    cout << "--------" << endl;

    // Member Initializer List
    cout << "Member Initializer List" << endl;

    cout << "--------" << endl;

    // The Default Constructor
    cout << "The Default Constructor" << endl;

    Rectangle first;
    cout << first.getWidth() << endl;

    cout << "--------" << endl;

    // Using the Explicit Keyword
    cout << "Using the Explicit Keyword" << endl;

    Person person{20};
    showPerson(person);

    cout << "--------" << endl;

    // Constructor Delegation
    cout << "Constructor Delegation" << endl;

    Rectangle rectangleWithColor{10, 20, "blue"};

    cout << "--------" << endl;

    // The Copy Constructor
    cout << "The Copy Constructor" << endl;

    Rectangle one = {10, 20};
    Rectangle two = one;

    // this one is different
    rectangle = rectangleWithColor;
    cout << rectangle.getColor() << endl;

    // rectangleWithColor is copied to parameter rectangle
    showRectangle(rectangleWithColor);

    cout << "--------" << endl;

    // The Destructor
    cout << "The Destructor" << endl;

    cout << "--------" << endl;

    // Static Members
    cout << "Static Members" << endl;

    cout << Rectangle::getObjectsCount() << endl;

    cout << "--------" << endl;

    // Constant Objects and Functions
    cout << "Constant Objects and Functions" << endl;

    cout << "--------" << endl;

    // Pointer to Objects
    cout << "Pointer to Objects" << endl;

    auto rectanglePtr = make_unique<Rectangle>(10, 20);
    rectanglePtr->draw();

    SmartPointer ptr{new int};

    cout << "--------" << endl;

    // Array of Objects
    cout << "Array of Objects" << endl;

    Rectangle rectangles[] = {
            {},
            {10, 20},
            {10, 20, "blue"}
    };

    for (auto &rect: rectangles)
        rect.draw();

    cout << "--------" << endl;


    return 0;
}

void showPerson(Person person) {

}

void showRectangle(Rectangle rectangle) {

}
