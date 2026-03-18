#include<iostream>
#include<string>

using namespace std;

// fucntion overloading mean same function defined number of times in a same class but either with different no of arguments or different data types....

class Normal{
    

  
  public:
  int a;
  int b;
  
//     Normal(int a){
//       this->a = a;
//       cout << "The a value is: " << this->a << endl;
//   }
  
  Normal(int a, int b){
      this->a = a;
      this->b = b;
  }
   
   void operator+(Normal& obj2){
       cout << "The operator overloading is defined" << endl;
       cout << "The subtraction of value is: " << this->a - obj2.b << endl;
   }

    void operator() (){
        cout << "Good Afternoon" << endl;
    }
    
    void operator++ (){
        --a;
        --b;
        
        cout <<"value of a is: " << this->a << " and value of b is: " << this->b << endl;
    }
    
    void add(int a, int b){
        cout<<"Two arguments and both are integer"<<endl;
        cout << a+b << endl;
    }
    
        
    void add(string a, char b){
        cout<<"Two arguments and one is integer and next one is char"<<endl;
        cout << a+b << endl;
    }
    
        
    void add(int a, int c, char b){
        cout<<"Two arguments and one is integer and next one is char"<<endl;
        cout << a+int(b) << endl;
    }
};


int main(){
    
    Normal obj1(12, 45);
    Normal obj2(13, -67);
    
    obj1.add(10 ,20);
    obj1.add("Samir", 'A');
    obj1.add(12, 34, 'd');
    
    obj1 + obj2;
    
    obj1();
    
    ++obj1;
    return 0;
}