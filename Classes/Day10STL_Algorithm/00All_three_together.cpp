#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    
    vector <int> v1 = {23,45,12,8,90,-45,56};
    
    cout << "Normal element before performing HEAP (max-heap) operation..." <<endl;
    
    for(const auto& value: v1){
        cout <<"value are....: " << value << endl;
    }

    cout << "Normal element after performing HEAP (max-heap) operation..." <<endl;
    
    make_heap(v1.begin(), v1.end());
    
    for(const auto& value: v1){
        cout <<"value are....: " << value << endl;
    }
    
    cout<< "POP heap method to shift the root element to last position and balance the entire tree.." << endl;
    
    pop_heap(v1.begin(), v1.end());
    
     for(const auto& value: v1){
        cout <<"value are....: " << value << endl;
    }
   
   
   cout << "using vector tempate pop_back method to delete the last element which was actually the root ellement" << endl;
   
   v1.pop_back();
   
    for(const auto& value: v1){
        cout <<"value are....: " << value << endl;
    }
   
    
    cout << "For inseetion purpose use template  prebuilt method, so for vector we will use push_back()" << endl;
    
    v1.push_back(49);
    
     for(const auto& value: v1){
        cout <<"value are....: " << value << endl;
    }
   
    cout<<"For balancving use HEAP (push_heap) method..." << endl;
    
    push_heap(v1.begin(), v1.end());
    
     for(const auto& value: v1){
        cout <<"value are....: " << value << endl;
    }
   
    
    
    return 0;
}