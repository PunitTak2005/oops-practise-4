#include <iostream>
using namespace std;

class Counter {
    static int count; // Static data member
public:
    void incrementCount() { count++; } // Non-static member function to increment count
    static void getCount() { // Static member function to get and display count
        cout << "Count: " << count << endl;
    }
};

int Counter::count = 0; // Initialize static member outside the class

int main() {
    Counter c1, c2; // Two objects of Counter class

    c1.incrementCount(); // Increment count using c1
    c2.incrementCount(); // Increment count using c2

    Counter::getCount(); // Display the current count using the static function

    return 0;
}
