#include <iostream>
#include <string>

using namespace std;

class BankAccount {
public:
    string userName;

    // Setter to modify private balance
    void setBalance(int b) {
        balance = b;
    }

    // Getter to view private balance
    int getBalance() {
        return balance;
    }

private:
    int balance; // This is now safe from direct outside access!
};

int main() {
    // 1. Declare the object first!
    BankAccount c1; 
    
    // 2. Now you can use it
    c1.userName = "Samir singh";
    c1.setBalance(6784);

    cout << "Account holder name is: " << c1.userName << endl;
    cout << "Current balance is: " << c1.getBalance() << endl;

    return 0;
}