#include <iostream>
using namespace std;

class Calculator {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to add two floating-point numbers
    double add(double a, double b) {
        return a + b;
    }

    // Function to add (concatenate) two strings
    string add(string a, string b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    
    // Demonstrate addition of integers
    cout << "Addition of integers: " << calc.add(3, 5) << endl;
    
    // Demonstrate addition of floating-point numbers
    cout << "Addition of doubles: " << calc.add(2.3, 4.7) << endl;
    
    // Demonstrate string concatenation
    cout << "Concatenation of strings: " << calc.add("Hello, ", "World!") << endl;
    
    return 0;
}
