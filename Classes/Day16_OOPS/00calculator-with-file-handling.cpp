#include<iostream>
#include<fstream>
#include<map>
#include<string>

using namespace std;

map<string, int> m1 = {
    {"Add", 0},
    {"Sub", 0},
    {"Mul", 0},
    {"Div", 0}
};

void fileOperation(int a, int b, double result, char oper){
    
    cout << "The write operation is initiated by a GENZ person.." << endl;

    ofstream file;
    file.open("Practice.txt", ios::app);
    
    if(file.is_open()){
        file << "The fucntion which was called it's operator is:-> " << oper << endl;
        file << "The first value is: " << a << " and the second value is:  " << b << endl;
        file << "The result is: " << result << endl;
    }
    
    file.close();
}

class Add{
public:
    void add(int a, int b){
        cout << "The addition of two given number is:  " << a+b << endl;
        cout << "The file operation got initiated pls wait for a moment: " << endl;

        fileOperation(a, b, a+b, '+');

        cout << "The write operation in the particular file is been updated.." << endl;
        cout << "The frequency is updating..." << endl;

        m1["Add"]++;
        cout << "The frequency is::" << m1["Add"] << endl;

        cout << '\n' << endl;
    }
};

class Sub{
public:
    void sub(int a, int b){
        cout << "The subtraction of two given number is:  " << a-b << endl;
        cout << "The file operation got initiated pls wait for a moment: " << endl;

        fileOperation(a, b, a-b, '-');

        cout << "The write operation in the particular file is been updated.." << endl;
        cout << "The frequency is updating..." << endl;

        m1["Sub"]++;
        cout << "The frequency is::" << m1["Sub"] << endl;

        cout << '\n' << endl;
    }
};

class Mul{
public:
    void mul(int a, int b){
        cout << "The multiplication of two given number is:  " << a*b << endl;
        cout << "The file operation got initiated pls wait for a moment: " << endl;

        fileOperation(a, b, a*b, '*');

        cout << "The write operation in the particular file is been updated.." << endl;
        cout << "The frequency is updating..." << endl;

        m1["Mul"]++;
        cout << "The frequency is::" << m1["Mul"] << endl;

        cout << '\n' << endl;
    }
};

class Div{
public:
    void division(int a, int b){
        if(b != 0){
            cout << "The division of two given number is:  " << a/b << endl;
            cout << "The file operation got initiated pls wait for a moment: " << endl;

            fileOperation(a, b, a/b, '/');

            cout << "The write operation in the particular file is been updated.." << endl;
            cout << "The frequency is updating..." << endl;

            m1["Div"]++;
            cout << "The frequency is::" << m1["Div"] << endl;
        }
        else{
            cout << "The second number must be higher than zero" << endl;
        }

        cout << '\n' << endl;
    }
};

class Cal : public Add, public Sub, public Mul, public Div{
public:
    void display(){
        cout << "The unwanted fucntion just for swag purpose" << endl;
        cout << '\n' << endl;
    }
};

int main(){
    
    cout << "The operation begin.." << endl;
    cout << '\n' << endl;

    Cal c1;
     
    c1.sub(35, 20);
    c1.mul(23,10);
    c1.division(30, 5);
    c1.sub(65, 13);
    c1.add(23, 65);
    c1.mul(34,78);
    
    return 0;
}