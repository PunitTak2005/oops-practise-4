#include <iostream>
using namespace std;

class Book {
    string title;
    int pages;
    static int totalBooks; // Static data member

public:
    // Constructor to initialize book details
    Book(string t, int p) : title(t), pages(p) {
        totalBooks++; // Increment the count of total books
    }

    // Constant member function to display book details
    void getBookInfo() const { 
        cout << "Title: " << title << ", Pages: " << pages << endl; 
    }

    // Static member function to display the total number of books
    static void getTotalBooks() {
        cout << "Total Books: " << totalBooks << endl;
    }
};

// Initialize static member variable
int Book::totalBooks = 0;

int main() {
    Book b1("C++ Programming", 500);
    Book b2("Data Structures", 350);

    b1.getBookInfo(); // Display details of the first book
    b2.getBookInfo(); // Display details of the second book

    Book::getTotalBooks(); // Display total number of books created

    return 0;
}
