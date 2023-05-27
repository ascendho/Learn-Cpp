#include <iostream>
#include "Length.h"
#include "Point.h"

using namespace std;

int main() {
    // Overloading the Equality Operator
    cout << "Overloading the Equality Operator" << endl;

    Length first{10};
    Length second{20};

    if (first != second)
        cout << "Not equal" << endl;

    Point x{10, 20};
    Point y{10, 20};

    cout << (x == y) << endl;

    cout << "--------" << endl;

    // Overloading the Comparison Operators
    cout << "Overloading the Comparison Operators" << endl;

    cout << "--------" << endl;

    // Overloading the Spaceship Operator
    cout << "Overloading the Spaceship Operator" << endl;

    if (first < second)
        cout << "First is smaller" << endl;

    cout << "--------" << endl;

    // Overloading the Stream Insertion Operator
    cout << "Overloading the Stream Insertion Operator" << endl;

    cout << first << endl;
    cout << x << endl;
    cout << y << endl;

    cout << "--------" << endl;

    // Overloading the Stream Extraction Operator
    cout << "Overloading the Stream Extraction Operator" << endl;

//    Length length{10};
//    cout << "Length:";
//    cin >> length;
//    cout << length<<endl;

    cout << "--------" << endl;

    // Friends of Classes
    cout << "Friends of Classes" << endl;

    cout << "--------" << endl;

    // Overloading the Arithmetic Operator
    cout << "Overloading the Arithmetic Operator" << endl;

    cout << first + second << endl;

    cout << "--------" << endl;

    // Overloading Compound Assignment Operators
    cout << "Overloading Compound Assignment Operators" << endl;

    first += second;
    cout << first << endl;

    cout << "--------" << endl;

    // Overloading the Assignment Operator
    cout << "Overloading the Assignment Operator" << endl;

    cout << "--------" << endl;

    // Overloading Unary Operator
    cout<<"Overloading Unary Operator"<<endl;

    

    cout << "--------" << endl;


    return 0;
}
