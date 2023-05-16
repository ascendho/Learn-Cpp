#include <iostream>
#include <limits>

using namespace std;

const int rows = 2;
const int columns = 3;

void printNumbers(int[], int);

int find(const int[], int, int);

void sort(int [], int);

void printMatrix(int [rows][columns]);

int main() {

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

    // Passing Arrays to Functions
    cout << "Passing Arrays to Functions" << endl;

    printNumbers(numbers, size(numbers));

    cout << "--------" << endl;

    // Understanding size_t
    cout << "Understanding size_t" << endl;

    // on 64-bit compiler, size_t= unsigned long long
    // on 32-bit compiler, size_t= unsigned int
    cout << numeric_limits<long long>::min() << endl;
    cout << numeric_limits<long long>::max() << endl;
    cout << numeric_limits<size_t>::min() << endl;
    cout << numeric_limits<size_t>::max() << endl;

    cout << "--------" << endl;

    // Unpacking Arrays
    cout << "Unpacking Arrays" << endl;

    int values[3] = {10, 20, 30};
    auto [x, y, z] = values;
    cout << x << ", " << y << ", " << z << endl;

    cout << "--------" << endl;

    // Searching Arrays
    cout << "Searching Arrays" << endl;

    cout << find(numbers, size(numbers), 1) << endl;

    cout << "--------" << endl;

    // Sorting Arrays
    cout << "Sorting Arrays" << endl;

    int tests[] = {10, 30, 20, -2};
    sort(tests, size(tests));
    for (auto test: tests)
        cout << test << " ";

    cout << endl << "--------" << endl;

    // Multi-dimensional Arrays
    cout << "Multi-dimensional Arrays" << endl;


    int matrix[rows][columns] = {
            {11, 12, 13},
            {21, 22, 23}
    };

    printMatrix(matrix);

    cout << endl << "--------" << endl;


    return 0;
}

void printNumbers(int numbers[], int size) {
    for (int i = 0; i < size; i++)
        cout << numbers[i] << endl;
}

int find(const int numbers[], int size, int target) {
    for (int i = 0; i < size; i++)
        if (target == numbers[i])
            return i;
    return -1;
}

void sort(int numbers[], int size) {

    // double for-loops
//    for (int i = 0; i < size - 1; i++)
//        for (int j = 0; j < size - i - 1; j++)
//            if (numbers[j] > numbers[j + 1])
//                swap(numbers[j], numbers[j + 1]);

    // single for-loop
    for (int i = 0; i < size - 1; i++) {
        if (numbers[i] > numbers[i + 1]) {
            swap(numbers[i], numbers[i + 1]);
            i = -1; // 重新开始下一轮比较
        }
    }
}

void printMatrix(int matrix[rows][columns]) {
    for (int row = 0; row < rows; row++)
        for (int col = 0; col < columns; col++)
            cout << matrix[row][col] << endl;
}