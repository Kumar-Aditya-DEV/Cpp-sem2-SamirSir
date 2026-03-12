#include<iostream>

using namespace std;

// fucntion overloading mean same function defined number of times in a same class but either with different no of arguments or different data types....

class Normal{
  
  public:
    
    void add(int a, int b){
        cout<<"Two arguments and both are integer"<<endl;
        cout << a+b << endl;
    }
    
        
    void add(int a, char b){
        cout<<"Two arguments and one is integer and next one is char"<<endl;
        cout << a+int(b) << endl;
    }
    
        
    void add(int a, int c, char b){
        cout<<"Two arguments and one is integer and next one is char"<<endl;
        cout << a+int(b) << endl;
    }
};

int main(){
    
    Normal obj1;
    
    obj1.add(10 ,20);
    obj1.add(56, 'A');
    obj1.add(12, 34, 'd');
    return 0;
}