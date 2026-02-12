#include <iostream>   // 🔹 Input Output ke liye
#include <vector>     // 🔹 Vector use karne ke liye
using namespace std;

int main(){

    vector<int> v1 = {1,2,3,4};  
    // 🟢 Vector banaya aur initial values di
    // Size = 4

    vector<int> v2;  
    // 🟡 Empty vector (abhi size = 0)

    v1.push_back(67);  
    // ➕ Last me element add karta hai
    // Now v1 = {1,2,3,4,67}
    // Size = 5

    // 🔁 Range-based for loop (for-of jaisa JS me)
    for(int value : v1){                                      
        cout << value << endl;
    }

    cout << "Total size of v1 is: " << v1.size() << endl;  
    // 📏 size() → total elements count karta hai

    v1.pop_back();  
    // ❌ Last element remove karta hai
    // 67 remove ho gaya
    // Now v1 = {1,2,3,4}
    // Size = 4

    cout << "Total size of v1 is: " << v1.size() << endl;

    v1.insert(v1.begin() + 2, 33);  
    // 📌 Specific position pe element add karta hai
    // begin() → index 0 ko point karta hai
    // begin() + 2 → index 2
    // Now v1 = {1,2,33,3,4}

    v1.erase(v1.begin() + 4);  
    // 🗑 Specific index ka element delete karta hai
    // (Index check karna important hai warna error)
    // After erase → v1 = {1,2,33,3}

    // 🔁 Dubara print
    for(int value : v1){
        cout << value << endl;
    }

    cout<< v1.front() << endl;  
    // 🥇 front() → first element return karega

    cout<< v1.back() << endl;   
    // 🥇 back() → last element return karega

    // v1.clear();  
    // 💣 clear() → poora vector empty kar deta hai
    // Size ho jayega 0

    return 0;
}


// 🔥 Important Memory Tricks

// 🧠 push_back() → vector ke peeche samaan daalna
// 🧠 pop_back() → peeche wala samaan hata dena
// 🧠 insert() → beech me ghusa dena
// 🧠 erase() → kisi ko nikaal dena
// 🧠 front() / back() → first & last element


// ⚠️ Important Warning
// erase(v1.begin() + 5) tabhi karna jab index exist kare
// warna 💥 runtime error.



