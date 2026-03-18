#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal{
protected:
    // protected variable → accessible in derived class only
    string sound = "Generic";
};

// Derived class (inherits Animal)
class Dog: public Animal {
public:
    // Constructor → automatically called when object is created
    Dog(){
        // modifying protected member of base class
        sound = "Bhau Bhau";
    }

    // Function to print sound
    void makeSound(){
        // printing the sound
        cout << "Dog makes sound: " << sound << endl;
    }
};

int main(){
    // Creating object of Dog class
    Dog d;

    // Calling function → prints sound
    d.makeSound();

    return 0;
}