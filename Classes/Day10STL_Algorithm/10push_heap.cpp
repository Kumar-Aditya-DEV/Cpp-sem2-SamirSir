#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v1 = {56, 45, 12, 8, 23, -45}; // Current Heap

    cout << "--- HEAP PUSH (Insertion) ---" << endl;

    // 1. Naya element end mein add karo
    v1.push_back(49);
    cout << "After push_back (49 at end): ";
    for(int x : v1) cout << x << " ";
    cout << endl;

    // 2. push_heap: 49 ko heap property ke hisaab se adjust karega
    push_heap(v1.begin(), v1.end());
    cout << "After push_heap (Balanced): ";
    for(int x : v1) cout << x << " ";
    cout << endl;

    return 0;
}