#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

int main(){
    
    vector <char> v1 = {'S', 'z', 'r', 'D'};
    
    set <int> s1 = {23,-56, 78, 90, 125};
    
    cout << "Vector Operation for Find method...." << endl;
    auto itr = find(v1.begin(), v1.end(), 'X');
    
    if(itr != v1.end()){
        cout << "Element exist:  " << *itr << endl;
    }
    else{
        cout << "Element doesn't exist" << endl;
    }
    
    cout << "Set operation  for Find method..." << endl;
    
    auto itr1 = find(s1.begin(), s1.end(), -56);
    
    if(itr1 != s1.end()){
        cout << "Element exist:  " << *itr1 << endl;
    }
    else{
        cout << "Element doesn't exist" << endl;
    }

    
    return 0;
}