#include<iostream>
#include<vector>
#include<list>
#include<set>
#include<map>
#include<string>
using namespace std;

int main(){
    
    // 🔹 Forward iteration ka matlab hota hai starting se end tak traverse karna
    cout << "Forward Iterations used in the below examples:   "<< endl;
    
    
    // ================= VECTOR =================
    
    // 🎯 vector of char create kiya
    vector <char> v1 = {'A', 'g', 'R', 'H'};
    
    // 🔸 iterator itr vector ke first element ko point karega
    auto itr = v1.begin();
    
    // 🔁 jab tak itr end tak nahi pahuchta tab tak loop chalega
    while(itr != v1.end()){
        
        // ⭐ *itr → dereference operator
        // iska matlab hai iterator jis element ko point kar raha hai uski value print karo
        cout << "Current Elelment present in vector is:  " << *itr << endl;
        
        // ➡️ iterator ko next element par move karna
        ++itr;
    }
    
    
    // ================= LIST =================
    
    // 🎯 list of string create ki
    list <string> l1 = {"samir singh", "amit rajput", "soni", "sumit"};
    
    // 🔸 list ka iterator first element par
    auto itr1 = l1.begin();
    
    while(itr1 != l1.end()){
        cout << "Current Elelment present in list is:  " << *itr1 << endl;
        ++itr1;
    }
    
    
    // ================= SET =================
    
    // 🎯 set automatically sorted hota hai (ascending order me)
    set <int> s1 = {89, -45, 56, 78, 34};
    
    auto itr2 = s1.begin();
    
    while(itr2 != s1.end()){
        
        // ⚠️ set me duplicate values allow nahi hoti
        cout << "Current Elelment present in set is:  " << *itr2 << endl;
        ++itr2;
    }
    
    
    
    // ================= MAP (IMPORTANT 🔥) =================
    
    // 🎯 map ek key-value pair container hota hai
    // syntax: map <key_datatype , value_datatype>
    map <int, float> m1;
    
    
    // 🔸 map me values insert kar rahe hain
    // yaha 0,1,2 → key hai
    // aur 789.09 etc → value hai
    m1[0] = 789.09;
    m1[1] = 797.545;
    m1[2] = -764.12;
    
    
    // map iterator first key-value pair ko point karega
    auto itr3 = m1.begin();
    
    while(itr3 != m1.end()){
        
        // ⭐ IMPORTANT PART ⭐
        
        // itr3 ek pair ko point karta hai
        // map internally aise store hota hai:
        // pair<int , float>
        
        // itr3->first  → key access karta hai
        // itr3->second → value access karta hai
        
        cout << "Map key is:  " << itr3->first 
             << " and the value is:  " 
             << itr3->second <<endl;
        
        ++itr3;
    }

    return 0;
}