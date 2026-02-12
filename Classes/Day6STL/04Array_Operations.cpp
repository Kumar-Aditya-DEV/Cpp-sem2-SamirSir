#include <iostream>
#include <array>      // 🔥 important header for std::array
using namespace std;

int main() {

    array<int, 5> arr = {10, 20, 30, 40, 50};
    // 🔹 Fixed size array (size = 5)

    cout << "Size: " << arr.size() << endl;     
    // 📏 size() → total elements

    cout << "Element at index 2: " << arr.at(2) << endl;  
    // 🎯 at(index) → safe access (bounds check karta hai)

    cout << "First element: " << arr.front() << endl;  
    // 🥇 front() → first element

    cout << "Last element: " << arr.back() << endl;   
    // 🥇 back() → last element

    cout << "Is array empty? " << arr.empty() << endl;  
    // ❓ empty() → true(1) ya false(0)

    arr.fill(0);  
    // 🧹 fill(value) → saare elements ko 0 kar dega

    cout << "After fill(): ";
    for(int value : arr){
        cout << value << " ";
    }

    return 0;
}

