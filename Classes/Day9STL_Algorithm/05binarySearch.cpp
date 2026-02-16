#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

// sort -> method :: vector, array and deque........

int main(){
    
    vector <int> v1 = {45, -76, 80, 12, 56};
    
    cout<< "Sort Operation is excecuting..." << endl;
    
    sort(v1.begin(), v1.end());
    
    cout<< "Soretd element are:  " << endl;
    
    for(const auto& value : v1){
        
        cout << "Value are:  " << value << endl;
    }
    
   cout << "Performing Binary operation..." << endl;
   
   bool result = binary_search(v1.begin(), v1.end(), -12);
   
   if(result){
       cout << "Particvular Elementn is exist" << endl;
   }
   else{
       cout << "Element doesn't exist" << endl;
   }
   
    return 0;
}