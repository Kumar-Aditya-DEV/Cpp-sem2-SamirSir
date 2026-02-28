#include <iostream>
using namespace std;

class Parent1 {
public:
    void display() {
        cout << "The display function is declared inside PARENT1 class" << endl;
    }
};

class Parent2 {
public:
    void display1() {
        cout << "The display1 function is declared inside PARENT2 class" << endl;
    }
};

class Child1 : public Parent1 {
public:
    void display2() {
        cout << "The display2 function is declared inside Child1 class which extended Parent1 class" << endl;
    }
};

class Child2 : public Parent1, public Parent2 {
public:
    void display3() {
        cout << "The display3 function is declared inside Child2 class which extended Parent1 and Parent2 class" << endl;
    }
};

int main() {

    Child1 c1;
    c1.display();
    c1.display2();

    Child2 c2;
    c2.display();
    c2.display1();
    c2.display3();

    return 0;
}