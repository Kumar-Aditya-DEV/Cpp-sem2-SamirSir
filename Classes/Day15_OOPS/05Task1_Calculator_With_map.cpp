#include<iostream>
#include<map>
using namespace std;

class Calculator {
private:
    int a, b;

public:
    map<string, int> counter = {
        {"add", 0},
        {"sub", 0},
        {"mult", 0},
        {"div", 0}
    };

    void getValue() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void add() {
        cout << "Addition: " << a + b << endl;
        counter["add"]++;
    }

    void sub() {
        cout << "Subtraction: " << a - b << endl;
        counter["sub"]++;
    }

    void mult() {
        cout << "Multiplication: " << a * b << endl;
        counter["mult"]++;
    }

    void div() {
        if(b != 0) {
            cout << "Division: " << a / b << endl;
            counter["div"]++;
        } else {
            cout << "Division by zero not allowed!" << endl;
        }
    }

    void showCount() {
        cout << "\nOperation Count:\n";
        for(auto x : counter) {
            cout << x.first << " used " << x.second << " times\n";
        }
    }
};

int main() {
    Calculator c;

    c.getValue();
    c.add();
    c.sub();
    c.mult();
    c.div();

    c.showCount();

    return 0;
}