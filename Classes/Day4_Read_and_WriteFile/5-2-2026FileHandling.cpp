                                            //  WRITE OPERATION

// #include<iostream>
// #include<fstream>



// using namespace std;
// int main(){

//     ofstream file;
//     file.open("example.txt", ios::app);
//     if(file.is_open()){
//         file << "Second time writing the same message but using ios::app." << endl;
//         file.close();
//     }

//     return 0;
// }



                                                                //READ OPERATION


#include<iostream>
#include<fstream>


using namespace std;
int main(){

    ifstream file;
    string data;
    file.open("example.txt");


    if(file.is_open()){

        getline(file, data);

        cout << "The file is reafing below this statement" << endl;

        // cout << data << endl;                          // for single line 

        while (getline(file,data)){                       // for multiple line 
            cout << data << endl;
        }

        file.close();
    }

    return 0;
}







