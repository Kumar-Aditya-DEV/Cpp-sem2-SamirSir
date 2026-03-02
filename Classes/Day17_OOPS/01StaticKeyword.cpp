#include<iostream>

using namespace std;

class CreateObj{
    
    public:
    // Data members....
         static int count;
         static char value;
         
    // Constructor...
         CreateObj(){
            ++count;
         }
    // Destructor...
         ~CreateObj(){
             --count;
         }
    
};

int CreateObj :: count = 0;
char CreateObj :: value = 'A';

void create(){
    
    CreateObj obj4, obj5, obj6, obj7;
    cout << "The number of object is while calling create fucntion->" << obj7.count << endl;
    
    
}

int main(){
    
    
    CreateObj obj1;
    cout << "The number of object is->" << obj1.count << endl;
    cout << "The character of object is->" << obj1.value << endl;
    cout << " " << endl;

    CreateObj obj2;
    cout << "The number of object is->" << obj2.count << endl;
    cout << "The character of object is->" << obj2.value << endl;
    cout << " " << endl;

    CreateObj obj3;
    cout << "The number of object is->" << obj3.count << endl;
    cout << "The character of object is->" << obj3.value << endl;
    cout << " " << endl;
    
    obj3.value = 'D';
    cout << "The character of object is->" << obj1.value << endl;
    cout << " " << endl;

    create();
    cout << " " << endl;

    cout << "The number of object is->" << obj2.count << endl;


    CreateObj obj4, obj5, obj6, obj7;
    cout << "the number of object is ->" << obj2.count << endl;
    

    return 0;
}