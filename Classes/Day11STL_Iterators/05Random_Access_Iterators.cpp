#include<iostream>
#include<vector>
#include<deque>
using namespace std;

int main(){

    // ============================================================
    // 🔥 RANDOM ACCESS ITERATOR EXAMPLE 1 : VECTOR
    // ============================================================

    // vector random access iterator provide karta hai
    // iska matlab:
    // ✔ forward move (++it)
    // ✔ backward move (--it)
    // ✔ direct jump possible (it+N , it-N)
    // ✔ index access possible (it[N])

    vector<int> marks = {85, 90, 78, 92, 88};

    auto it = marks.begin();

    // *it → current element access karta hai
    cout << "First mark: " << *it << endl;    // 85


    // it[2] → direct index access
    // same as marks[2]
    cout << "Third mark: " << it[2] << endl;  // 78


    // it += 3 → 3 steps forward jump
    // constant time me move hota hai O(1)
    it += 3;

    cout << "Fourth mark: " << *it << endl;   // 92

    cout << endl;



    // ============================================================
    // 🔥 RANDOM ACCESS ITERATOR EXAMPLE 2 : FORWARD + BACKWARD
    // ============================================================

    auto it2 = marks.begin();

    ++it2;          // forward move
    cout << *it2 << endl;   // 90

    --it2;          // backward move
    cout << *it2 << endl;   // 85

    cout << endl;



    // ============================================================
    // 🔥 RANDOM ACCESS ITERATOR EXAMPLE 3 : JUMP FORWARD
    // ============================================================

    auto it3 = marks.begin();

    // it3 + 4 → 4th index par jump karega
    cout << *(it3 + 4) << endl;   // 88

    cout << endl;



    // ============================================================
    // 🔥 RANDOM ACCESS ITERATOR EXAMPLE 4 : DEQUE
    // ============================================================

    // deque bhi random access iterator support karta hai
    deque<int> dq = {10,20,30,40,50};

    auto it4 = dq.begin();

    // index access possible
    cout << it4[3] << endl;    // 40

    // forward jump
    it4 = it4 + 2;
    cout << *it4 << endl;      // 30

    // backward jump
    it4 = it4 - 1;
    cout << *it4 << endl;      // 20



    return 0;
}