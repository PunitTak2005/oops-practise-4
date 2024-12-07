#include <iostream>
using namespace std;

class Account {
public:
    virtual void calculateInterest() { // Virtual function
        cout << "Calculating interest for Account" << endl;
    }
};

class SavingsAccount : public Account {
public:
    void calculateInterest() override { // Override the virtual function
        cout << "Calculating interest for SavingsAccount" << endl;
    }
};

class CurrentAccount : public Account {
public:
    void calculateInterest() override { // Override the virtual function
        cout << "Calculating interest for CurrentAccount" << endl;
    }
};

int main() {
    Account *acc; // Pointer to base class
    SavingsAccount sa; // SavingsAccount object
    CurrentAccount ca; // CurrentAccount object

    acc = &sa; // Point to a SavingsAccount object
    acc->calculateInterest(); // Calls SavingsAccount's version of calculateInterest

    acc = &ca; // Point to a CurrentAccount object
    acc->calculateInterest(); // Calls CurrentAccount's version of calculateInterest

    return 0;
}
