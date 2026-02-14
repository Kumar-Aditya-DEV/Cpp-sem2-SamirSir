#include <iostream>
#include <unordered_map>

using namespace std;

int main() {

    unordered_multimap<int, string> umm;

    // insert duplicate keys
    umm.insert({1, "John"});
    umm.insert({1, "Doe"});
    umm.insert({2, "Alice"});

    cout << "Elements in unordered_multimap:\n";
    for (auto& pair : umm) {
        cout << "Key: " << pair.first 
             << " Value: " << pair.second << endl;
    }

    // count
    cout << "\nCount of key 1: " << umm.count(1);

    // find
    auto it = umm.find(1);
    if (it != umm.end()) {
        cout << "\nFirst value with key 1: " << it->second;
    }

    // erase all key = 1
    umm.erase(1);

    cout << "\nAfter erasing key 1:\n";
    for (auto& pair : umm) {
        cout << pair.first << " " << pair.second << endl;
    }

    return 0;
}
