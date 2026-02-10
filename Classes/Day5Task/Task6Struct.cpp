// #include<iostream>
// #include<string>

// using namespace std;

// struct Employee{
//     int ID;
//     string name;
//     int salary;
// };

// int main(){
    
//     int size = 0;
    
//     cout << "Enter the size of array: " << endl;
//     cin >> size;
    
//     Employee emp[size];
    
//     // Input
//     for(int i = 0; i < size; i++){
//         cout << "Enter your id: " << endl;
//         cin >> emp[i].ID;
        
//         cout << "Enter your name: " << endl;
//         cin >> emp[i].name;
        
//         cout << "Enter your salary: " << endl;
//         cin >> emp[i].salary;
//     }
    
//     // Print all employees
//     for(int i = 0; i < size; i++){
//         cout << "Current index: " << i 
//              << " Employee ID: " << emp[i].ID 
//              << " Name: " << emp[i].name 
//              << " Salary: " << emp[i].salary 
//              << endl;
//     }
    
//     // Find highest salary
//     int maxIndex = 0;
    
//     for(int i = 1; i < size; i++){
//         if(emp[i].salary > emp[maxIndex].salary){
//             maxIndex = i;
//         }
//     }
    
//     // 2-3 line break
//     cout << "\n\n\n";
    
//     cout << "Employee with Highest Salary:" << endl;
//     cout << "ID: " << emp[maxIndex].ID << endl;
//     cout << "Name: " << emp[maxIndex].name << endl;
//     cout << "Salary: " << emp[maxIndex].salary << endl;

//     return 0;
// }



#include<iostream>
#include<string>
#include<fstream>

using namespace std;

struct Employee{
    int ID;
    string name;
    int salary;
};


int main(){
    
    int size = 0;
    
    cout<< "enter the size of array:  " << endl;
    cin >> size;
    
    Employee emp[size];
    
    for(int i=0; i<2; i++){
        cout<< "Enter you're id:  " << endl;
        cin >> emp[i].ID;
        cout << "enter you're name:  " << endl;
        cin >> emp[i].name;
        cout<<"enter you valid salary:  " << endl;
        cin >> emp[i].salary;
        
        // file write operation.......
        ofstream file;
        
        file.open("sample.txt", ios::app);
        
        if(file.is_open()){
            
            file<< "Employee ID: " << emp[i].ID<< endl;
            file << "Employee Name: " << emp[i].name<< endl;
        }
        
        file.close();
        
    }
    
    for(int i=0; i< 2; i++){
        cout<< "current index number is:  " << i << " empyee id is: " << emp[i].ID << " Employee name is: " << emp[i].name << endl;
    }
    
    return 0;
}