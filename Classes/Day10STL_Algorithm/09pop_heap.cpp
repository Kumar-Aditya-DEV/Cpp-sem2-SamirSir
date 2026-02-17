#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v1 = {90, 45, 56, 8, 23, -45, 12}; // Already a heap

    cout << "--- HEAP POP (Deletion) ---" << endl;

    // 1. pop_heap: Max element (90) ko vector ke end mein shift karega
    pop_heap(v1.begin(), v1.end());
    cout << "After pop_heap (90 moved to end): ";
    for(int x : v1) cout << x << " ";
    cout << endl;

    // 2. pop_back: Asli deletion yahan hoti hai
    v1.pop_back();
    cout << "After pop_back (90 permanently removed): ";
    for(int x : v1) cout << x << " ";
    cout << endl;

    return 0;
}