#include <iostream>
#include "Rectangle.h"
#include "TextBox.h"
#include "Person.h"

using namespace std;

void showPerson(Person);

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

    return 0;
}

void showPerson(Person person){

}