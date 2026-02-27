#include <iostream>
#include <fstream>
using namespace std;

class Addition {
public:
    int add(int a, int b) {
        return a + b;
    }
};

class Multiplication {
public:
    int multiply(int a, int b) {
        return a * b;
    }
};

class Subtraction {
public:
    int sub(int a, int b) {
        return a - b;
    }
};

class Division {
public:
    int divi(int a, int b) {
        return a / b;
    }
};

class Calculator : public Addition,public Multiplication,public Subtraction,  public Division 
{};

int main() {
    Calculator c;
    ofstream file("result.txt");

   

    int addResult = c.add(70, 10);
    int mulResult = c.multiply(50, 30);
    int subResult = c.sub(10, 2);
    int divResult = c.divi(15, 3);


    cout << "Addition: " << addResult << endl;
    cout << "Multiplication: " << mulResult << endl;
    cout << "Subtraction: " << subResult << endl;
    cout << "Division: " << divResult << endl;

    file << "Addition: " << addResult << endl;
    file << "Multiplication: " << mulResult << endl;
    file << "Subtraction: " << subResult << endl;
    file << "Division: " << divResult << endl;

    file.close();  

    cout << "Results saved to result.txt file successfully.";

    return 0;
}