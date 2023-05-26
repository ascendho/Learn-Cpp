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

    if(first<second)
        cout<<"First is smaller"<<endl;

    cout << "--------" << endl;

    return 0;
}
