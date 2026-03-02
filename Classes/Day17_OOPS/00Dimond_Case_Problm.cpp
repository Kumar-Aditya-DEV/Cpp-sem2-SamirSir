// // 1️⃣ WITHOUT Virtual (Problem Version)
// #include<iostream>
// using namespace std;

// class Person {
// public:
//     string name;
//     int age;

//     void showPerson() {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//     }
// };

// class Student : public Person {
// public:
//     int rollNo;
// };

// class Employee : public Person {
// public:
//     int empId;
// };

// class TeachingAssistant : public Student, public Employee {
// public:
//     string subject;
// };

// int main() {
//     TeachingAssistant obj;

//     obj.name = "Aditya";   // ❌ Ambiguity Error
//     obj.age = 22;

//     obj.rollNo = 101;
//     obj.empId = 5001;
//     obj.subject = "C++";

//     obj.showPerson();      // ❌ Ambiguity
// }




// ✅ 2️⃣ WITH Virtual (Correct Version)
#include<iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void showPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : virtual public Person {
public:
    int rollNo;
};

class Employee : virtual public Person {
public:
    int empId;
};

class TeachingAssistant : public Student, public Employee {
public:
    string subject;
};

int main() {
    TeachingAssistant obj;

    obj.name = "Aditya";
    obj.age = 22;
    obj.rollNo = 101;
    obj.empId = 5001;
    obj.subject = "C++";

    obj.showPerson();

    cout << "Roll No: " << obj.rollNo << endl;
    cout << "Employee ID: " << obj.empId << endl;
    cout << "Subject: " << obj.subject << endl;

    return 0;
}