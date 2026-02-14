#include <iostream>
#include <unordered_set>

using namespace std;

int main() {

    unordered_multiset<int> ums;

    // insert (duplicates allowed)
    ums.insert(10);
    ums.insert(10);
    ums.insert(20);
    ums.insert(30);

    cout << "Elements in unordered_multiset:\n";
    for (auto val : ums) {
        cout << val << " ";
    }

    // count
    cout << "\nCount of 10: " << ums.count(10);

    // erase (removes all 10)
    ums.erase(10);

    cout << "\nAfter erasing 10:\n";
    for (auto val : ums) {
        cout << val << " ";
    }

    return 0;
}
