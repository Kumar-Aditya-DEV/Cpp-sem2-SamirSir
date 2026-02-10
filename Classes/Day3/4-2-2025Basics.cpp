                                            // EENUM 

// #include<iostream>
// using namespace std;


//     enum word{
//               LOW,
//               MEDIUM,
//               HIGH
//         };

// int main(){


//     enum word a1 = LOW;
//     enum word a2 = MEDIUM;
//     enum word a3 = HIGH;


//     cout << a1 << endl;
//     cout << a2 << endl;
//     cout << a3 << endl;



//     // switch (a2){
//     // case 0: cout << "case0 got print" << endl;
//     // break;
//     // case 1: cout << "case1 got print" << endl;
//     // break;
//     // case 2: cout << "case2 got print" << endl;
//     // break;
//     // default: cout << "no such expression matched" << endl;
//     // }

//       return 0;
// }





// #include<iostream>
// using namespace std;


//     enum word{
//               LOW = 10,
//               MEDIUM = 20,
//               HIGH = 30
//         };

// int main(){


//     enum word a1 = LOW;
//     enum word a2 = MEDIUM;
//     enum word a3 = HIGH;


// //     cout << a1 << endl;
// //     cout << a2 << endl;
// //     cout << a3 << endl;



//     switch (a2){
//     case 10: cout << "case0 got print" << endl;
//     break;
//     case 20: cout << "case1 got print" << endl;
//     break;
//     case 30: cout << "case2 got print" << endl;
//     break;
//     default: cout << "no such expression matched" << endl;
//     }

//       return 0;
// }





                                                                      // POINTER


// #include<iostream>
// using namespace std;

// int main(){
//     // int a = 10;
//     // int *ptr = &a;

//     // cout<< "the actual targated variable whicjh is a whose address is : " << &a << endl;
//     // cout<< "the address print with the help of ptr for  targated variable  is : " << ptr << endl;



//     // *ptr = 67;
//     // cout<< "The new value in a variable is : " << a << endl;


//         int a = 10;
//         int *ptr = &a;
//         int **ptr = &ptr;
//         int arr[5] = {1,2,3,4,5};
//         int *arr1 = arr;

//         for(int i=0;i<5;++i){
//             cout<< "Current index is : " << i << "and value is : " << arr1[i] << endl;
//         }

//     return 0;
// }




                                                // MEMORY MANAGEMENT
// #include<iostream>
// using namespace std;

// int main(){
//         int *ptr = new int;
//         *ptr = 34;
//         cout << *ptr << ":   " << ptr << endl;
//         delete ptr;
//         cout << "Memory got deleted" << endl;

//     return 0;
// }