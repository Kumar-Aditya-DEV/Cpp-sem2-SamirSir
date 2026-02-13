#include <iostream>
#include <map>
using namespace std;

int main() {

    multimap<string,char> m1;
    
    m1.insert({"april", 'A'});
    m1.insert({"april", 'G'});
    m1.insert({"aman", 'Y'});
   
    // This will remove ALL entries with key "april"
    m1.erase("april");
   
    for(auto& [key, value] : m1){
        cout << "Current key is: " 
             << key 
             << " and value is: " 
             << value << endl;
    }

    return 0;
}
