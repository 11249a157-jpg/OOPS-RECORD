#include <iostream>
using namespace std;

class Account {
    double balance;

public:
    Account(double b = 0.0) : balance(b) {}

    void deposit(double balance) {   // parameter has same name as member
        this->balance += balance;    // use this-> to access member variable
    }

    void show() const {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account a(1000.0);
    a.show();          // show initial balance
    a.deposit(500.0);  // deposit amount
    a.show();          // show new balance

    return 0;
}
