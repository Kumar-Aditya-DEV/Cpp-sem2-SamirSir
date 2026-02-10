#include <iostream>
#include<string>
using namespace std;
int main() {
    // Write C++ code here
    cout << "Try programiz.pro" << endl;
    string name = "samir singh";
    cout<< "Name is: " << name << endl;
    cout<< "Length is: " << name.length() << endl;
    cout<< "Size is: " << name.size() << endl;
    
    string fname;
    string lname;
    
    cout<< "Enter you're firstname: " << endl;
    cin >> fname;
    cout<< "Enter you're lastname: " << endl;
    cin >> lname;
    
    string fullname = fname.append(lname);
    cout<< "Full name is: " << fullname << endl;
    
     cout<< "Size is: " << fullname.size() << endl;
    cout<< "Size is: " << fullname.at(6) << endl;
    
    
    string fullname1;
    
    getline(cin, fullname1);
    
    cout<< "Fullname using getline() method is: " << fullname1 << endl;
    return 0;
}