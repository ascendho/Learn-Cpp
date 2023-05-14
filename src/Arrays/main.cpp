#include <iostream>

using namespace std;

void printNumbers(int[], int);

int main() {
    /* Arrays */

    // Creating and Initializing Arrays
    cout << "Creating and Initializing Arrays" << endl;

    int numbers[] = {10, 20, 30};
    cout << numbers << endl;

    for (auto number: numbers)
        cout << number << endl;

    cout << "--------" << endl;

    // Determining the Size of Arrays
    cout << "Determining the Size of Arrays" << endl;

    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
        cout << numbers[i] << endl;

    for (int i = 0; i < size(numbers); i++)
        cout << numbers[i] << endl;

    cout << "--------" << endl;

    // Copying Arrays
    cout << "Copying Arrays" << endl;

    int first[] = {10, 20, 30};
    int second[size(first)];

    for (int i = 0; i < size(first); i++)
        second[i] = first[i];

    for (auto number: second)
        cout << number << endl;

    cout << "--------" << endl;

    // Comparing Arrays
    cout << "Comparing Arrays" << endl;

    bool areEqual = true;
    for (int i = 0; i < size(first); i++)
        if (first[i] != second[i]) {
            areEqual = false;
            break;
        }

    cout << boolalpha << areEqual << endl;

    cout << "--------" << endl;

    // fPassing Arrays to Functions
    cout << "Passing Arrays to Functions" << endl;

    printNumbers(numbers, size(numbers));

    cout << "--------" << endl;

    return 0;
}

void printNumbers(int numbers[], int size) {
    for (int i = 0; i < size; i++)
        cout << numbers[i] << endl;
}