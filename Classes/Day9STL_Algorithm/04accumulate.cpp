#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

// sort -> method :: vector, array and deque........

int main(){
    
    vector <int> v1 = {10,20,35};
    
    
   cout << "Performing accumulate operation..." << endl;
   
   int result = accumulate(v1.begin(), v1.end(),0);
    
    
    cout << "The total sum is:  " << result << endl;
    return 0;
}