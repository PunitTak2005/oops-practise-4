#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() { cout << "Drawing a Shape" << endl; } // Virtual function for dynamic binding
};

class Circle : public Shape {
public:
    void draw() override { cout << "Drawing a Circle" << endl; } // Override draw function for Circle
};

class Rectangle : public Shape {
public:
    void draw() override { cout << "Drawing a Rectangle" << endl; } // Override draw function for Rectangle
};

// No Triangle class defined for simplicity

int main() {
    Shape *shape; // Pointer to base class
    Circle circle; // Circle object
    Rectangle rect; // Rectangle object

    shape = &circle; // Point to Circle object
    shape->draw();   // Calls Circle's draw()

    shape = &rect;   // Point to Rectangle object
    shape->draw();   // Calls Rectangle's draw()

    return 0;
}
