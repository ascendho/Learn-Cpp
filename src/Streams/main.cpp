#include <iostream>
#include <limits>
#include <fstream>
#include <iomanip>
#include <sstream>

using namespace std;

int getNumber(const string &);

struct Movie {
    int id;
    string title;
    int year;
};

struct Film {
    string title;
    int year;
};

string toString(double, int);

Film parseFilm(string);

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

    // Writing to Binary Files
    cout << "Writing to Binary Files" << endl;

    int inNumbers[] = {1'000'000, 2'000'000, 3'000'000};
    ofstream writeFile("inNumbers.dat", ios::binary);

    if (writeFile.is_open()) {
        writeFile.write(reinterpret_cast<char *>(&inNumbers), sizeof(inNumbers));
        writeFile.close();
    }

    cout << "--------" << endl;

    // Reading from Binary Files
    cout << "Reading from Binary Files" << endl;

    int outNumbers[3];
    ifstream readFile("numbers.dat", ios::binary);
    if (readFile.is_open()) {
        int number;
        while (readFile.read(reinterpret_cast<char *>(&number), sizeof(number)))
            cout << number << endl;
        readFile.close();
    }

    cout << "--------" << endl;

    // Working with File Streams
    cout << "Working with File Streams" << endl;

    fstream stream;
    stream.open("file.txt", ios::in | ios::out | ios::app | ios::binary);

    if (stream.is_open()) {
        stream.close();
    }
    cout << "--------" << endl;

    // String Streams
    cout << "String Streams" << endl;

    cout << "--------" << endl;

    // Converting Values to Strings
    cout << "Converting Values to Strings" << endl;

    double number = 12.34;
    string str = to_string(number);
    cout << str << endl;

    str = toString(number, 2);
    cout << str << endl;

    cout << "--------" << endl;

    // Parsing Strings
    cout << "Parsing Strings" << endl;

    str = "10 20";
    stringstream strStream;
    strStream.str(str);

    int first, second;
    strStream >> first;
    strStream >> second;

    cout << first << " " << second << endl;

    auto film = parseFilm("Terminator 1, 1984");
    cout << film.title << endl;
    cout << film.year << endl;

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

string toString(double number, int precision) {
    stringstream strStream;
    strStream << fixed << setprecision(precision) << number;
    return strStream.str();
}

Film parseFilm(string str) {
    stringstream strStream;
    strStream.str(str);

    Film film;
    getline(strStream, film.title, ',');
    strStream >> film.year;

    return film;

}