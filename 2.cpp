#include <iostream>
using namespace std;

class Car {
    static int count; // Static data member to track the number of Car objects created
public:
    Car() { count++; } // Constructor increments the static count whenever a new object is created
    static void getCount() { // Static member function to display the count
        cout << "Number of Car objects created: " << count << endl;
    }
};

// Initialize the static member
int Car::count = 0;

int main() {
    Car c1; // Create first Car object
    Car c2; // Create second Car object
    Car c3; // Create third Car object
    Car::getCount(); // Call static member function to display the count

    return 0;
}
