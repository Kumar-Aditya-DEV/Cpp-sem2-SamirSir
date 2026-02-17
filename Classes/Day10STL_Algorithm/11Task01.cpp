// Question -> create STL : vector size take size input from user,insert element take value from user side,Using stl algorithmaccumulate the total element, find max, min-element, sort the vector reverse it.Then store total accumulate value,min and max element, find vector elements inside "ouput.txt"


#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(){
    int m,value;
    
    vector <int> v1;

    cout << "Enter size of vector: " << endl;

    cin>>m;

    cout << "Enter element of vector: " << endl;


    for(int i = 0; i < m; i++){
        cin>>value;
        v1.push_back(value);
    }

    for(const auto& value : v1){
        cout << value << endl;
    }

    int total = accumulate(v1.begin(), v1.end(), 0);

    cout << "Total score: " << total << endl;

    return 0;

}