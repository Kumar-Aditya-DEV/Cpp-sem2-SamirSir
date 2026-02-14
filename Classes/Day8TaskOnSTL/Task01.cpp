// question -> create vector store elements but value will be taken from the user side then ask indices from user to print paticular element present in that indices, again ask indices from user to erase that element atleast print the remaining element + size means pahele element print karao fir zise print karao




// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {

//     vector<int> v1(10);
//     cout << "Enter 10 Numbers" << endl;

//     for (int i = 0; i < 10; i++) {
//         cin >> v1[i];
//     }

//     int n1;
//     cout<< "Enter Index Number You Want" << endl ;
//     cin >> n1; 
//     cout<< "Your Number is " << v1[n1] << endl;

//     int n2;
//     cout<< "Enter Index Number You Want to Remove" << endl ;
//       cin >> n2; 
//       v1.erase(v1.begin() + n2);
//     cout<< "Removed Number" << endl ;

//     for(int i = 0; i < 9; i++) {
//         cout << v1[i] << " ";
//     }


//     return 0;
// }






// by samir sir 


#include <iostream>
#include <vector>


using namespace std;
int main(){
    vector<int> v;
    int val;
    
    for(int i = 0 ; i < 5 ; i++){
        cout<<"Enter a value :";
        cin>>val;
        v.push_back(val);
    }
    int idx;
    cout<<"enter index:"<<endl;
    cin>>idx;
    cout << "The actuall element in the given indicies is :  " << v.at(idx) << endl;
    
    idx = 0;
    
    cout<<"removing index:";
    cin>>idx;
    
    v.erase(v.begin()+idx);
    
    for(int i : v){
        cout<<i<<endl;
    }
    
    return 0;
}