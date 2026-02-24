#include<iostream>
#include<string>

using namespace std;

// Student class banayi gayi hai to represent a student object
class Student{

    public:   // public access modifier so that we can access data outside class

          // Data members (properties of Student)
          string name;
          int age;
          string gender;

          // Member function to display student details
          void display(){ 
              cout<< "Current object name is: " << this->name << endl;

              // 'this' keyword current object ko point karta hai
              cout << "Current age is " << this->age 
                   << " Current gender is: " << this->gender << endl;
          }
};


// Human class banayi gayi hai to represent a human object
class Human{

    public:   // public access modifier

          // Data members (properties of Human)
          string name1;
          int age1;
          string gender1;
          int weight;

          // Member function to display human details
          void display(){ 
              cout<< "Current object name is: " << this->name1 << endl;
              cout << "Current age is " << this->age1 
                   << " Current gender is: " << this->gender1 << endl;

              // weight ko print kar rahe hai
              cout << "Human skeleton is running and weight is : " 
                   << this->weight << endl;
          }
};



int main(){

    cout << "Object is created from here: "  << endl;

    // Student class ka object create kiya
    Student s1;

    // Human class ka object create kiya
    Human h1;

    // Student object ko values assign ki
    s1.name = "Samir singh";
    s1.age = 24;
    s1.gender = "male";

    // Human object ko values assign ki
    h1.name1 = "parth";
    h1.age1 = 18;
    h1.gender1 = "male";
    h1.weight = 76;

    // Student object ka display function call
    s1.display();

    // Human object ka display function call
    h1.display();

    return 0;
}
