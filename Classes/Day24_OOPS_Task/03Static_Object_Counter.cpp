#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    static int totalEmployees;   // static counter

public:
    // constructor
    Employee(string n) {
        name = n;
        totalEmployees++;        // increment on each object creation
    }

    // static getter
    static int getTotal() {
        return totalEmployees;
    }
};

// static variable definition
int Employee::totalEmployees = 0;

int main() {
    Employee e1("A");
    Employee e2("B");
    Employee e3("C");
    Employee e4("D");

    cout << "Total Employees = " << Employee::getTotal();  // Output: 4
}