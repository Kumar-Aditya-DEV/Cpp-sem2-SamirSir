#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

// sort -> method :: vector, array and deque........

int main(){
    
    vector <int> v1 = {45, -76, 80, 12, 56};
    vector <int> v2(v1.size());
    
    copy(v1.begin(), v1.end(), v2.begin());
    
    for(const auto& value : v2){
        cout << "Copied element from the ooriginal vector is:  " << value << endl;
    }
   
    return 0;
}