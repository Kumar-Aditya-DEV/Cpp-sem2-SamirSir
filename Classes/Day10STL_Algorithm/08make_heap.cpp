#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v1 = {23, 45, 12, 8, 90, -45, 56};

    cout << "--- HEAP CREATION ---" << endl;
    
    // Normal Vector
    cout << "Before make_heap: ";
    for(int x : v1) cout << x << " ";
    cout << endl;

    // Sabse bada element root (index 0) par aa jayega
    make_heap(v1.begin(), v1.end());

    cout << "After make_heap (Max-Heap): ";
    for(int x : v1) cout << x << " ";
    cout << endl;

    return 0;
}