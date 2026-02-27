#include<iostream>
#include<string>

using namespace std;

class Parent1{
    
    public:
      
       string name = "Parent1";
       int a = 1;
       
       void display(){
           cout << "The display is implemented inside Parent1" << endl;
           cout << "The name is:  " << this->name << endl;
       }
       

    
};

class Parent2{
    
    public:
      
       string name1 = "Parent2";
       int a1 = 2;
       
       void display(){
           cout << "The display is implemented inside Parent2" << endl;
           cout << "The name is:  " << this->name1 << endl;
       }
       
       
    
};

class Child1 : public Parent1, public Parent2{
    
    public:
      
       string name2 = "Child1";
       int a2 = 3;
       
       void display1(){
           cout << "The display is implemented inside Child1" << endl;
           cout << "The name is:  " << this->name2 << endl;
       }
       


};



int main(){
    Child1 c1;
    c1.Parent2::display();
    return 0;
}