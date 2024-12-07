#include <iostream>
using namespace std;

class Appliance {
public:
    virtual void powerUsage() = 0; // Pure virtual function (abstract)
};

class Fan : public Appliance {
public:
    void powerUsage() override {
        cout << "Fan uses 70W." << endl;
    }
};

class AirConditioner : public Appliance {
public:
    void powerUsage() override {
        cout << "Air Conditioner uses 1500W." << endl;
    }
};

int main() {
    Appliance *appl; // Pointer to base class

    Fan fan; // Creating a Fan object
    AirConditioner ac; // Creating an AirConditioner object

    appl = &fan; // Pointing to Fan object
    appl->powerUsage(); // Calls Fan's powerUsage()

    appl = &ac; // Pointing to AirConditioner object
    appl->powerUsage(); // Calls AirConditioner's powerUsage()

    return 0;
}
