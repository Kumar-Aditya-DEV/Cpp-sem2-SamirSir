#include<iostream>
using namespace std;


class Basic {
public:
    int a, b;

    void getValues() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
};


class Calculator : public Basic {
public:
    void add() {
        cout << "Addition: " << a + b << endl;
    }

    void sub() {
        cout << "Subtraction: " << a - b << endl;
    }

    void mult() {
        cout << "Multiplication: " << a * b << endl;
    }

    void div() {
        if(b != 0)
            cout << "Division: " << a / b << endl;
        else
            cout << "Division by zero not allowed!" << endl;
    }
};


int main() {
    Calculator c;  

    c.getValues(); 
    c.add();       
    c.sub();
    c.mult();
    c.div();

    return 0;
}











// #include <iostream>
// #include <fstream>
// using namespace std;


// class Addition {
// public:
//     int add(int a, int b) {
//         return a + b;
//     }
// };


// class Multiplication {
// public:
//     int multiply(int a, int b) {
//         return a * b;
//     }
// };

// class Subtraction {
//     public : 
//     int sub(int a , int b){
//         return a-b ;
//     }
// };

// class Division {
//     public : 
//     int divi(int a , int b ){
//         return a/b;
//     }
// };


// class Calculator : public Addition, public Multiplication , public Subtraction , public Division {};

// int main() {
//     Calculator c;

//     cout << "Addition: " << c.add(10, 5) << endl;
//     cout << "Multiplication: " << c.multiply(10, 5) << endl;
//     cout << "Subtraction : " << c.sub(15 , 5) << endl;
//     cout << "Division :" << c.divi(60 , 3) << endl;

//     return 0;
// }

