#include<iostream>
#include<set>
#include<list>
#include<map>
using namespace std;

int main(){

    // ============================================================
    // 🔥 BIDIRECTIONAL ITERATOR EXAMPLE 1 : SET (REVERSE TRAVERSAL)
    // ============================================================

    // set ek sorted container hota hai
    // ye internally Red Black Tree use karta hai
    // isliye forward aur backward traversal dono possible hai

    set<int> studentIDs = {101,102,103};

    // end() last element ko point nahi karta
    // balki last ke next memory location ko point karta hai
    auto it1 = studentIDs.end();

    // jab tak iterator begin tak nahi pahuchta
    while(it1 != studentIDs.begin()){

        --it1;      // backward move (only possible in bidirectional iterator)
        cout << *it1 << " ";
    }

    cout << endl << endl;



    // ============================================================
    // 🔥 BIDIRECTIONAL ITERATOR EXAMPLE 2 : LIST (REVERSE)
    // ============================================================

    // list ek doubly linked list hoti hai
    // isme next aur previous pointer dono hote hai
    // isliye backward traversal allowed hai

    list<int> marks = {10,20,30,40};

    auto it2 = marks.end();

    while(it2 != marks.begin()){

        --it2;      // previous node par move
        cout << *it2 << " ";
    }

    cout << endl << endl;



    // ============================================================
    // 🔥 BIDIRECTIONAL ITERATOR EXAMPLE 3 : MAP (VERY IMPORTANT)
    // ============================================================

    // map key-value pair me data store karta hai
    // internally ye pair<key , value> store karta hai

    map<int,string> m;

    // key = unique hoti hai
    // value = duplicate ho sakti hai
    m[1] = "Rahul";
    m[2] = "Amit";
    m[3] = "Sam";

    auto it3 = m.end();

    while(it3 != m.begin()){

        --it3;     

        // itr3 ek pair ko point karta hai:
        // pair<int , string>

        // it3->first  → key access karta hai
        // it3->second → value access karta hai

        cout << "Key: " << it3->first
             << " Value: " << it3->second << endl;
    }

    cout << endl;



    // ============================================================
    // 🔥 BIDIRECTIONAL ITERATOR EXAMPLE 4 : FORWARD + BACKWARD
    // ============================================================

    list<int> data = {5,10,15};

    auto it4 = data.begin();

    // begin() first element ko point karta hai
    cout << *it4 << endl;    // 5

    ++it4;                   // forward move
    cout << *it4 << endl;    // 10

    --it4;                   // backward move
    cout << *it4 << endl;    // 5



    return 0;
}






// //  Forward Iterator      → only ++ allowed
// // Bidirectional Iterator→ ++ and -- allowed

// // Supported Containers:
// // list
// // set
// // map

// // Important Operators:
// // *it      → value access
// // ++it     → next element
// // --it     → previous element
// // it->first  → key (in map)
// // it->second → value (in map)