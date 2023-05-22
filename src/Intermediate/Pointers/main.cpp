#include <iostream>
#include <memory>

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

    // Pointer Arithmetic
    cout << "Pointer Arithmetic" << endl;

    cout << *(ptr_numbers + 1) << " " << ptr_numbers[1] << " " << numbers[1] << endl;
    cout << *ptr_numbers << endl;
    ptr_numbers++;
    cout << *ptr_numbers << endl;

    cout << "--------" << endl;

    // Comparing Pointers
    cout << "Comparing Pointers" << endl;

    int *ptrLast = &numbers[size(numbers) - 1];

    while (ptrLast >= numbers) {
        cout << *ptrLast << endl;
        ptrLast--;
    }

    cout << "--------" << endl;

    // Dynamic Memory Allocation
    cout << "Dynamic Memory Allocation" << endl;

    // Store on stack and automatically cleaned up
    // int numbers[100]

    // Store on Heap (Free Store)
    // need manual cleaning
    int *items = new int[5];
    int *item = new int;

    delete item;
    delete[] items;

    item = nullptr;
    items = nullptr;

    cout << "--------" << endl;

    // Dynamically Resizing an Array
    cout << "Dynamically Resizing an Array" << endl;

    /*
    int capacity = 5;
    int entries = 0;
    items = new int[capacity];

    while (true) {
        cout << "Number: ";
        cin >> items[entries];
        if (cin.fail())break;
        entries++;

        if (capacity == entries) {
            capacity *= 2;
            int *temp = new int[capacity];
            for (int i = 0; i < entries; i++)
                temp[i] = items[i];
            delete[] items;
            items = temp;
        }
    }

    for (int i = 0; i < entries; i++)
        cout << items[i] << endl;

    delete[] items;
    */

    cout << "--------" << endl;

    // Smart Pointers
    cout << "Smart Pointers" << endl;


    cout << "--------" << endl;

    // Working with Unique Pointers
    cout << "Working with Unique Pointers" << endl;

    unique_ptr<int> uniqueX(new int);
    *uniqueX = 10;

    cout << uniqueX << " " << *uniqueX << endl;

    unique_ptr<int> uniqueY = make_unique<int>();
    // or
    // auto uniqueY = make_unique<int>();

    cout << uniqueY << endl;

    unique_ptr<int[]> uniqueArr = make_unique<int[]>(5);
    uniqueArr[0] = 55;

    cout << uniqueArr << " " << uniqueArr[0] << endl;

    cout << "--------" << endl;

    // Working with Shared Pointers
    cout << "Working with Shared Pointers" << endl;

    auto sharedX = make_shared<int>();
    *sharedX = 10;

    shared_ptr<int> sharedY(sharedX);

    cout << sharedX << " " << *sharedX << endl;
    cout << sharedY << " " << *sharedY << endl;
    cout << boolalpha << (sharedX == sharedY) << endl;

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