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

    [[nodiscard]] bool equals(const Film &film) const {
        return (this->title == film.title &&
                this->releaseDate.year == film.releaseDate.year &&
                this->releaseDate.month == film.releaseDate.month &&
                this->releaseDate.day == film.releaseDate.day);
    }

    //    [[nodiscard]] bool operator==(const Film &film) const {
    //        return (this->title == film.title &&
    //                this->releaseDate.year == film.releaseDate.year &&
    //                this->releaseDate.month == film.releaseDate.month &&
    //                this->releaseDate.day == film.releaseDate.day);
    //    }
};

// we can do it outside (recommended)

bool operator==(const Film &first, const Film &second) {
    return (
            first.title == second.title &&
            first.releaseDate.year == second.releaseDate.year &&
            first.releaseDate.month == second.releaseDate.month &&
            first.releaseDate.day == second.releaseDate.day
    );
}

ostream &operator<<(ostream &stream, const Film &film) {
    stream << film.title << film.releaseDate.year;
    return stream;
}

struct Customer {
    int id;
    string name;
    string email;
    Address address;
};

struct Point {
    int x;
    int y;
};

bool operator==(const Point &first, const Point &second) {
    return (
            first.x == second.x &&
            first.y == second.y
    );
}

ostream &operator<<(ostream &stream, const Point &point) {
    return stream << "(" << point.x << "," << point.y << ")";
}

Movie getMovie();

void showMovie(Movie &);

void showMovie(Movie *);

enum Action {
    List = 1,
    Add,
    Update
};

enum class Operation {
    List = 1,
    Add,
    Update
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

    // Operator Overloading
    cout << "Operator Overloading" << endl;

    if (film1 == film2)
        cout << "Equal" << endl;

    cout << film1 << endl;

    Point A(1, 2), B(2, 3);

    cout << (A == B) << endl;

    if (A == B)
        cout << "Equal" << endl;
    else
        cout << "Not equal" << endl;

    cout << A << " " << B << endl;

    cout << "--------" << endl;

    // Structures and Functions
    cout << "Structures and Functions" << endl;

    movie = getMovie();
    showMovie(movie);

    cout << "--------" << endl;

    // Pointers to Structures
    cout << "Pointers to Structures" << endl;

    showMovie(&movie);

    cout << "--------" << endl;

    // Defining Enumerations
    cout << "Defining Enumerations" << endl;

    int input = 1;

    if (input == Action::List)
        cout << "List invoices" << endl;

    cout << "--------" << endl;

    // Strongly Typed Enumerations
    cout << "Strongly Typed Enumerations" << endl;

    if (input == static_cast<int>(Operation::List))
        cout << "List invoices" << endl;

    cout << "--------" << endl;

    return 0;
}


Movie getMovie() {
    return {
            "Terminator", "1984"
    };
}

void showMovie(Movie &movie) {
    cout << movie.title << endl;
}

void showMovie(Movie *movie) {
    cout << (*movie).title << endl;
    cout << movie->releaseYear << endl;
}