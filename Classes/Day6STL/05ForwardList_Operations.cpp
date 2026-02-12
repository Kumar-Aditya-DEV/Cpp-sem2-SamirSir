#include <iostream>
#include <forward_list>   // 🔥 important header
using namespace std;

int main() {

    forward_list<int> fl = {10, 20, 30, 40};

    // 🔹 push_front(val)
    fl.push_front(5);   // 5 sabse aage add hoga
    // Now: 5 10 20 30 40

    // 🔹 pop_front()
    fl.pop_front();     // first element remove
    // Now: 10 20 30 40

    // 🔹 insert_after(pos, val)
    fl.insert_after(fl.begin(), 25);  
    // begin() -> 10
    // 10 ke baad 25 add hoga
    // Now: 10 25 20 30 40

    // 🔹 erase_after(pos)
    fl.erase_after(fl.begin());  
    // 10 ke baad wala element delete (25 remove)
    // Now: 10 20 30 40

    // 🔹 remove(val)
    fl.remove(30);  
    // 30 wali value remove
    // Now: 10 20 40

    // 🔹 size() nahi hota → loop se count
    int count = 0;
    for(int val : fl){
        count++;
    }

    cout << "Elements in forward_list: ";
    for(int val : fl){
        cout << val << " ";
    }

    cout << "\nSize (manual count): " << count << endl;

    return 0;
}
