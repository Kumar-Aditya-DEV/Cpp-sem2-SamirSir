#include<iostream>
#include<string>
using namespace std;

class Student{

private:
    string password;
    int grade;

public:
    string name;

    // Constructor
    Student(string n, int g, string pass){
        if(g >= 0 && g <= 100){
            name = n;
            grade = g;
            password = pass;
            cout << "Student account created\n";
        }
        else{
            cout << "Error: Grade must be between 0 and 100\n";
        }
    }

    // Get password (only if correct password entered)
    void getPassword(string pass){
        if(pass == password){
            cout << "Password is: " << password << endl;
        }
        else{
            cout << "Error: Incorrect password\n";
        }
    }

    // Set grade
    void setGrade(string pass, int g){
        if(pass == password){
            if(g >= 0 && g <= 100){
                grade = g;
                cout << "Grade updated successfully\n";
            }
            else{
                cout << "Error: Grade must be between 0 and 100\n";
            }
        }
        else{
            cout << "Error: Incorrect password\n";
        }
    }

    // Change password
    void setPassword(string oldPass, string newPass){
        if(oldPass == password){
            password = newPass;
            cout << "Password changed successfully\n";
        }
        else{
            cout << "Error: Old password incorrect\n";
        }
    }

};

int main(){

    Student s1("Aditya", 85, "abc123");

    s1.getPassword("abc123");

    s1.setGrade("abc123", 90);

    s1.setPassword("abc123","newpass");

    return 0;
}