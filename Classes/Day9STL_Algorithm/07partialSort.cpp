#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

// sort -> method :: vector, array and deque........

int main(){
    
    vector <int> v1 = {45, -76, 80, 12, 56};
    
    partial_sort(v1.begin(), v1.begin() + 3, v1.end());
    

    for(const auto& value : v1){
        cout << "Sorted element from the ooriginal vector is:  " << value << endl;
    }
   
    return 0;
}