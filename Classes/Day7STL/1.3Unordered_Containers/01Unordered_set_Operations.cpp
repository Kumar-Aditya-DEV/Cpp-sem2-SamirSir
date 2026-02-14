#include <iostream>
#include <unordered_set>

using namespace std;

int main() {

    unordered_set<int> us;

    // insert
    us.insert(10);
    us.insert(20);
    us.insert(30);
    us.insert(10); // duplicate (ignore hoga)

    cout << "Elements in unordered_set:\n";
    for (auto val : us) {
        cout << val << " ";
    }

    cout << "\n\nSize: " << us.size();

    // find
    if (us.find(20) != us.end()) {
        cout << "\n20 Found";
    }

    // count
    cout << "\nCount of 10: " << us.count(10);

    // erase
    us.erase(30);

    cout << "\nAfter erasing 30:\n";
    for (auto val : us) {
        cout << val << " ";
    }

    cout << "\nIs Empty? " << us.empty() << endl;

    return 0;
}
