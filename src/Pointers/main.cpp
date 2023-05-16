#include <iostream>

using namespace std;

void increasePrice(double *);

void swap(int *, int *);

void printNumbers(int []);

int main() {

    // What is a Pointer
    cout << "What is a Pointer" << endl;

    int number = 10;

    // The address-of operator
    int *ptr = &number;
    // Indirection (de-referencing) operator
    *ptr = 20;

    cout << number << endl;

    cout << "--------" << endl;

    // Constant Pointers
    cout << "Constant Pointers" << endl;

    // Data is constant
    const int x = 10;
    const int *ptr_x = &x;
    int y = 20;
    ptr_x = &y;

    // Pointer is constant
    int a = 10;
    int *const ptr_a = &a;

    // Both data and pointer are constant
    const int b = 10;
    const int *const ptr_b = &b;

    cout << "--------" << endl;

    // Passing Pointers to Functions
    cout << "Passing Pointers to Functions" << endl;

    double price = 100;
    increasePrice(&price);

    cout << price << endl;

    cout << "--------" << endl;

    // The Relationship Between Arrays and Pointers
    cout << "The Relationship Between Arrays and Pointers" << endl;

    int numbers[] = {10, 20, 30};
    cout << numbers << " " << *numbers << endl;

    int *ptr_numbers = numbers;
    cout << ptr_numbers << " " << *ptr_numbers << endl;

    cout << numbers[1] << " " << ptr_numbers[1] << endl;

    cout << "--------" << endl;


    return 0;
}

void increasePrice(double *price) {
    *price *= 1.2;
}

void swap(int *first, int *second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

void printNumbers(int numbers[]) {
    // numbers in this function is treated as an integer pointer,
    // so we can't use size function to get its length
    // size(numbers);

    // and we can't use range-based for loop
    // for(int number:numbers)

    // function parameters that are arrays are passed by reference


}