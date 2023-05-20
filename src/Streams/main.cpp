#include <iostream>
#include <limits>
#include <fstream>
#include <iomanip>

using namespace std;

int getNumber(const string &);

struct Movie {
    int id;
    string title;
    int year;
};

int main() {
    // Understanding Streams
    cout << "Understanding Streams" << endl;


    cout << "--------" << endl;

    // Writing to Streams
    cout << "Writing to Streams" << endl;


    cout << "--------" << endl;

    // Reading from Streams
//    cout << "Reading from Streams" << endl;
//
//    // Buffer: temporary storage
//    // [20 10]
//    int first, second;
//
//    while (true) {
//        cout << "First:";
//        cin >> first;
//        if (cin.fail()) {
//            cout << "Enter a valid number!" << endl;
//            cin.clear();
//            // clear buffer
//            cin.ignore(numeric_limits<streamsize>::max(), '\n');
//        } else
//            break;
//
//    }
//
//    // clear buffer
//    cin.ignore(numeric_limits<streamsize>::max(), '\n');
//
//    cout << "Second:";
//    cin >> second;
//
//    cout << "You entered " << first << " and " << second << endl;


    // Handling Input Errors
    cout << "Handling Input Errors" << endl;

//    int first = getNumber("first:");

//    cin.ignore(numeric_limits<streamsize>::max(), '\n');

//    int second = getNumber("second:");

//    cout << "You entered " << first << " and " << second << endl;

    cout << "--------" << endl;

    // File Streams
    cout << "File Streams" << endl;

    cout << "--------" << endl;

    // Writing to Text File
    cout << "Writing to Text File" << endl;

    ofstream outFile;
    outFile.open("data.txt");

    if (outFile.is_open()) {
        outFile << setw(20) << "Hello" << setw(20) << "World" << endl;
        outFile.close();
    }

    outFile.open("data.csv");

    if (outFile.is_open()) {
        // CSV: Comma Separated Value
        // for the sake of performance, here we use '\n' rather than endl
        outFile << "id,title,year\n"
                << "1,Terminator1,1984\n"
                << "2,Terminator2,1989\n";
        outFile.close();
    }

    cout << "--------" << endl;

    // Reading from Text Files
    cout << "Reading from Text Files" << endl;

    ifstream inFile;
    inFile.open("data.csv");

    if (inFile.is_open()) {
        string str;
        getline(inFile, str);

        while (!inFile.eof()) {
            Movie movie;

            getline(inFile, str, ',');
            if (str.empty())continue;

            movie.id = stoi(str);

            getline(inFile, str, ',');
            movie.title = str;

            getline(inFile, str);
            movie.year = stoi(str);

            cout << movie.title << endl;
        }
        inFile.close();
    }

    cout << "--------" << endl;


    return 0;
}

int getNumber(const string &prompt) {
    int number;
    while (true) {
        cout << prompt;
        cin >> number;
        if (cin.fail()) {
            cout << "Enter a valid number!" << endl;
            cin.clear();
            // clear buffer
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else
            break;
    }

    return number;
}