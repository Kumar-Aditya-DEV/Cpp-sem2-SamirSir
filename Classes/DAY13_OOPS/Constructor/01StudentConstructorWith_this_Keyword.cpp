#include<iostream>
#include<string>
using namespace std;

// Student class banayi gayi hai (Blueprint)
class Student{
    public:
      
    //   Data members (har object ke liye alag value store hogi)
        string name;
        string gender;
        int age;
        
        
    // Constructor (Automatically call hota hai jab object create hota hai)
        Student(string name1, string gender1, int age1){
            
            // Constructor me values receive ho rahi hai object create hote time
            cout << "The value is going to intialize through construvtor  " << name1 << "  " <<endl;
            
            // Initialization of data members using constructor parameters
            name = name1;
            gender = gender1;
            age = age1;
            
            cout << "Intialized the required value in the particular data members" << endl;
        }
        
    // Member Function to display object data
        void display(){
            
            // Check karne ke liye ki constructor ne value initialize ki ya nahi
            cout << "TO just check if the value is Intialized or not through Constructor" << endl;
            
            // 'this' pointer current object ko refer karta hai
            // Jaise agar s1.display() call hua toh this->name = s1 ka name
            // Agar s2.display() call hua toh this->name = s2 ka name
            
            cout << "The current object data is:  " 
                 << this->name << " " 
                 << this->gender << " " 
                 << this->age << endl;
        }
};

int main(){
    
    // s1 object create hua → constructor automatically call hoga
    Student s1("samir singh", "male", 24);
    
    // s2 object create hua → constructor automatically call hoga
    Student s2("Path", "male", 18);
    
    // s2 object ka display function call ho raha hai
    s2.display();
    
    // s1 object ka display function call ho raha hai
    s1.display();
    
    return 0;
}