#include <iostream>
#include <cstring>

using namespace std;

bool isValid(string);

int main() {

    // C Strings
    cout << "C Strings" << endl;

    // String literal
    char name[50] = "Mosh";

    // Null terminator ('\0')
    cout << name[49] << endl;

    // Character literal
    name[0] = 'm';

    // Null terminator is not included
    cout << strlen(name) << endl; //4

    char lastName[] = " Hamedani";

    // Concatenate (combine)
    // but the capacity of name is 5 (before modified)
    // usually we changed to a larger value (50)

    strcat(name, lastName);
    cout << name << endl;

    strcpy(name, lastName);
    cout << name << endl;

    if (!strcmp(name, lastName))
        cout << "Equal" << endl;

    cout << "--------" << endl;

    // C++ Strings
    cout << "C++ Strings" << endl;

    string nameStr = "Mosh";
    nameStr[0] = 'm';
    cout << nameStr << endl;
    cout << nameStr.length() << " " << nameStr.size() << endl;

    nameStr += " Hamedani";
    cout << nameStr << endl;

    string another = nameStr;
    if (another == nameStr)
        cout << "Same" << endl;

    // API
    cout << boolalpha << nameStr.starts_with('m') << endl;
    cout << boolalpha << nameStr.ends_with('i') << endl;
    cout << boolalpha << nameStr.empty() << endl;
    cout << nameStr.front() << endl;
    cout << nameStr.back() << endl;

    cout << "--------" << endl;

    // Modifying Strings
    cout << "Modifying Strings" << endl;

    nameStr.append("+");
    nameStr.insert(0, "I am ");
    cout << nameStr << endl;

    nameStr.erase(0, 2);
    cout << nameStr << endl;

    nameStr.replace(0, 2, "I ");
    cout << nameStr << endl;

    nameStr.clear();
    cout << nameStr << endl;

    cout << "--------" << endl;

    // Searching Strings
    cout << "Searching Strings" << endl;

    nameStr = "Mosh, Hamedani";

    cout << nameStr.find('a', 7) << endl;
    cout << nameStr.rfind('a') << endl;
    cout << nameStr.find("Ham") << endl;

    cout << nameStr.find_first_of(",.;") << endl;
    cout << nameStr.find_last_of(",.;") << endl;

    if (-1 == nameStr.find('A'))
        cout << "Doesn't Exist!" << endl;

    cout << "--------" << endl;

    // Extracting Substrings
    cout << "Extracting Substrings" << endl;

    nameStr = "Mosh Smith Hamedani";
    auto index = nameStr.rfind(' ');
    string first = nameStr.substr(0, index);
    string last = nameStr.substr(index + 1);

    cout << first << endl;
    cout << last << endl;

    cout << "--------" << endl;

    // Working with Characters
    cout << "Working with Characters" << endl;

    nameStr = "Mosh Hamedani";

    cout << islower(nameStr[0]) << endl;
    cout << isupper(nameStr[0]) << endl;
    cout << isalpha(nameStr[0]) << endl;
    cout << isdigit(nameStr[0]) << endl;
    cout << isspace(nameStr[0]) << endl;

    cout << (char) toupper('a') << endl;
    cout << (char) tolower('A') << endl;

    string customerNumber = "AB1234";
    cout << isValid(customerNumber) << endl;

    cout << "--------" << endl;

    // String_Numeric Conversion Functions
    cout << "String_Numeric Conversion Functions" << endl;

    double price = stod("19.99");
    cout << price << endl;

    string str = to_string(19.99);
    cout << str << endl;

    cout << "--------" << endl;

    // Escape Sequences
    cout << "Escape Sequences" << endl;

    string escapeSeq = "c:\\my folder";
    cout << escapeSeq << endl;

    escapeSeq = "\"Hello World\"";
    cout << escapeSeq << endl;

    escapeSeq = "'Hello World'";
    cout << escapeSeq << endl;

    char ch = '\'';
    cout << ch << endl;

    escapeSeq = "Hello\n World";
    cout << escapeSeq << endl;

    escapeSeq = "Hello\tWorld";
    cout << escapeSeq << endl;

    cout << "--------" << endl;

    // Raw Strings
    cout << "Raw Strings" << endl;

    string path = R"("c:\folderA\folderB\file.txt")";
    cout << path << endl;

    cout << "--------" << endl;

    return 0;
}

bool isValid(string customerNumber) {
    if (6 != customerNumber.size())
        return false;

    for (int i = 0; i < 2; i++)
        if (!isalpha(customerNumber[i]))
            return false;

    for (int i = 2; i < customerNumber.size(); i++)
        if (!isdigit(customerNumber[i]))
            return false;

    return true;
}