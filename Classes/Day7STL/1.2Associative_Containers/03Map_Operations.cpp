#include<iostream>
#include<map>

using namespace std;

int main(){
    
    
    map<string,char> m1;
    
    m1["Aman"] = 'A';
    m1["amar"] = 'o';
    m1["April"] = 'B';
    
    for(auto& [key , value] : m1){
        cout << "Current key is:  " << key << "  and the value is:  " << value << endl;
    }
    
    map<int, string> m2;
    
    m2[5] = "aman";
    m2[-89] = "april";
    m2[0] = "amar";
    
    cout << endl;
    
      for(auto& [key , value] : m2){
        cout << "Current key is:  " << key << "  and the value is:  " << value << endl;
    }
    
    cout << endl;
    
    m2[0]="sam";
    
    cout << m2.at(0) << endl;
  return 0;
}