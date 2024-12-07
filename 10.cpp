#include <iostream>
using namespace std;

class Student {
    int marks;
public:
    Student(int m) : marks(m) {}

    // Overload < operator
    bool operator<(const Student &s) {
        return marks < s.marks;
    }

    // Overload > operator
    bool operator>(const Student &s) {
        return marks > s.marks;
    }
};

int main() {
    Student s1(85), s2(90);

    if (s1 > s2) {
        cout << "Student1 has higher marks." << endl;
    } else if (s1 < s2) {
        cout << "Student2 has higher marks." << endl;
    } else {
        cout << "Both students have equal marks." << endl;
    }

    return 0;
}
