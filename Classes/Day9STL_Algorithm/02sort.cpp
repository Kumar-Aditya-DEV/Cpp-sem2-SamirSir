#include<iostream>
#include<vector>
#include<list>
#include<algorithm>

using namespace std;


//  works in -> vector, array, deque .......
int main(){
    
    vector<char> v1 = {'S', 'z', 'r', 'D'};
    
    list<int> s1 = {23, -56, 78, 90, 125};
    
    cout << "Vector Operation for Sort method...." << endl;
    
    sort(v1.begin(), v1.end());
    
    for(const auto& value : v1){
        cout << "After performing sort operation in v1: " << value << endl;
    }
    
    cout << "List operation for Sort method..." << endl;
    
    s1.sort();   // ✅ correct way
    
    for(const auto& value1 : s1){
        cout << "After performing sort operation in s1: " << value1 << endl;
    }
    
    return 0;
}
