#include<iostream>
#include<set>

using namespace std;

int main(){
    
    set<char> s1;
    set<char> s2 = {'a','c','b','f','d'};
    
    s2.erase('b');
    
    for(char value : s2){
        cout << value << endl;
    }
    
    s1.insert('G');
    
      for(char value : s1){
        cout << "S1 variable value:  "<<value << endl;
    }
    
    // find operation......
    auto itr = s2.find('g');
    
    if(itr != s2.end()){
        cout<< "Founded the element:  " << *itr << endl;
    }
    else{
        cout << "Element doesn't exit" << endl;
    }
    
    
  
    
    
    
    return 0;
}