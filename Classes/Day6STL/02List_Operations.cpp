#include <iostream>
#include <list>
using namespace std;

int main() {

    list<int> l = {10, 20, 30};

    // 🔹 push_back(val)
    l.push_back(40);    
    // 10 20 30 40

    // 🔹 push_front(val)
    l.push_front(5);    
    // 5 10 20 30 40

    // 🔹 pop_back()
    l.pop_back();       
    // 5 10 20 30

    // 🔹 pop_front()
    l.pop_front();      
    // 10 20 30

    // 🔹 insert(pos, val)
    auto it = l.begin();
    advance(it, 1);     // iterator ko 1 step aage le gaye (20 pe)
    l.insert(it, 15);   
    // 10 15 20 30

    // 🔹 erase(pos)
    l.erase(l.begin()); 
    // 15 20 30

    // 🔹 remove(val)
    l.remove(20);       
    // 15 30

    // 🔹 size()
    cout << "Size: " << l.size() << endl;

    // 🔹 reverse()
    l.reverse();        
    // 30 15

    // 🔹 sort()
    l.sort();           
    // 15 30

    cout << "Final List: ";
    for(int val : l){
        cout << val << " ";
    }

    return 0;
}
