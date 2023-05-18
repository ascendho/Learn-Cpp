#include <iostream>
#include <vector>

using namespace std;

struct Date {
    short year = 1900;
    short month = 1;
    short day = 1;
};

struct Address {
    string street;
    string city;
    int zipCode;
};

struct Movie {
    string title;
    string releaseYear;

    // Default value
    bool isPopular = false;

};

struct Film {
    string title;
    Date releaseDate;
    bool isPopular;

    [[nodiscard]] bool equals(const Film &film) const  {
        return this->title == film.title;
    }
};

struct Customer {
    int id;
    string name;
    string email;
    Address address;
};

int main() {

    // Defining Structures
    cout << "Defining Structures" << endl;

    // Movie movie;
    // movie.title = "Terminator";
    // movie.releaseYear = "1984";

    //    Customer customer;
    //    cout << "ID: ";
    //    cin >> customer.id;
    //
    //    cout << "Name: ";
    //    cin >> customer.name;
    //
    //    cout << "Email: ";
    //    cin >> customer.email;
    //
    //    cout << customer.name << endl;

    cout << "--------" << endl;

    // Initializing Structures
    cout << "Initializing Structures" << endl;

    Movie movie = {"Terminator", "1984", true};

    cout << movie.releaseYear << endl;

    cout << "--------" << endl;

    // Unpacking Structures
    cout << "Unpacking Structures" << endl;

    auto [title, releaseYear, isPopular]{movie};

    cout << releaseYear << endl;

    cout << "--------" << endl;

    // Array of Structures
    cout << "Array of Structures" << endl;

    vector<Movie> movies;

    movies.push_back({"Terminator1", "1984"});
    movies.push_back({"Terminator2", "1991"});

    for (const auto &movie: movies)
        cout << movie.title << endl;

    cout << "--------" << endl;

    // Nesting Structures
    cout << "Nesting Structures" << endl;

    Film film = {
            "Terminator",
            {1984, 6, 1}
    };

    cout << film.releaseDate.year << endl;

    Customer customer = {
            1,
            "Mosh",
            "Email",
            {
                    "24 Santa Monica Blvd",
                    "Los Angeles",
                    90401
            }
    };

    cout << customer.address.zipCode << endl;

    cout << "--------" << endl;

    // Comparing Structures
    cout << "Comparing Structures" << endl;

    Film film1 = {
            "Terminator",
            {1984, 6, 1}
    };

    Film film2 = {
            "Terminator",
            {1984, 6, 1}
    };

    if (film1.title == film2.title)
        cout << "Equal" << endl;

    cout << "--------" << endl;

    // Working with Methods
    cout << "Working with Methods" << endl;

    cout << film1.equals(film2) << endl;

    cout << "--------" << endl;

    return 0;
}
