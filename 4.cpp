#include <iostream>
using namespace std;

class ComplexNumber {
    int real, imag;

public:
    ComplexNumber(int r = 0, int i = 0) : real(r), imag(i) {}

    // Overload unary ++ operator
    ComplexNumber operator++() { // Prefix increment
        ++real;
        ++imag;
        return *this;
    }

    // Overload binary + operator
    ComplexNumber operator+(const ComplexNumber &obj) {
        return ComplexNumber(real + obj.real, imag + obj.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    ComplexNumber c1(3, 4), c2(1, 2), c3;

    ++c1; // Apply unary ++ to c1
    c1.display(); // Display incremented c1

    c3 = c1 + c2; // Apply binary + to c1 and c2
    c3.display(); // Display the result

    return 0;
}
