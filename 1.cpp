#include <iostream>
using namespace std;

class Rectangle {
    const int length; // Constant data member
    int width;
public:
    // Constructor to initialize constant member
    Rectangle(int l, int w) : length(l), width(w) {}
    
    // Constant member function
    void area() const {
        cout << "Area: " << length * width << endl;
    }
};

int main() {
    Rectangle rect(10, 5); // Create a Rectangle object with length 10 and width 5
    rect.area(); // Calculate and display the area
    
    return 0;
}
