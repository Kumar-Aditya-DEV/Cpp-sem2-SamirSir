// unordered_map.cpp

#include <iostream>
#include <unordered_map>

using namespace std;

int main() {

    unordered_map<int, string> um;

    // insert
    um.insert({1, "John"});
    um.insert({2, "Alice"});

    // operator[]
    um[3] = "Bob";

    cout << "Elements in unordered_map:\n";
    for (auto& pair : um) {
        cout << "Key: " << pair.first 
             << " Value: " << pair.second << endl;
    }

    // find
    if (um.find(2) != um.end()) {
        cout << "\nKey 2 Found";
    }

    // at()
    cout << "\nValue at key 1: " << um.at(1);

    // erase
    um.erase(3);

    cout << "\nAfter erasing key 3:\n";
    for (auto& pair : um) {
        cout << pair.first << " " << pair.second << endl;
    }

    return 0;
}
