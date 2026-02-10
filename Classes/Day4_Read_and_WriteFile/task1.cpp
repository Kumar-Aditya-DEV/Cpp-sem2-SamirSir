
                                            //   TASK -> AB USER KE HAND SE DATA INPUT HONA CHIEA 


// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {

//     ofstream file("example.txt", ios::app);

//     string data;
//     cout << "hey bro kuch likho yrr : ";
//     cin >> data;  

//     file << data; 

//     file.close();

//     return 0;
// }




                                      //for multiple line  

#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream file("example.txt", ios::app);

    string data;
    cout << "hey bro kuch likho yrr : ";
    getline(cin, data);  

    file << data << endl; 

    file.close();

    return 0;
}
