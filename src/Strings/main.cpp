#include <iostream>
#include <cstring>

using namespace std;

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

    return 0;
}
