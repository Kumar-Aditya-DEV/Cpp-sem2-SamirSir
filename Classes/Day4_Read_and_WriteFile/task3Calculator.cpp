                        // SIMPLE METHOD 

// #include<iostream>
// using namespace std;


//     void add(int a, int b){
//         cout << "Addition = " << a + b << endl;
//     }
//     void subtract(int a, int b){
//         cout << "Subtraction = " << a - b << endl;
//     }
//     void multiplication(int a, int b){
//         cout << "Multiplication = " << a * b << endl;
//     }
//     void division(int a, int b){
//         if(b == 0){
//             cout << "division by zero is not allowed" << endl;
//         }
//         else{
//             cout << "Division = " << a / b << endl;}
//     }


// int main (){

//     int num1, num2;
//     cout << "Enter two number : ";
//     cin >> num1 >> num2;

//     add(num1, num2);
//     subtract(num1, num2);
//     multiplication(num1, num2);
//     division(num1, num2);


//     return 0;
// }






                                         // SIR KA METHOD 



#include<iostream>
using namespace std;

int main (){

int a;
int a1;
int b1;

cout << "From the given option pls choose anyone: " << endl;
cout << "Press -> 1 for Addition operation" << endl;
cout << "Press -> 2 for Subtraction operation" << endl;
cout << "Press -> 3 for Multiplication operation" << endl;
cout << "Press -> 4 for Division operation" << endl;
cout << "Enter you're choice " << endl;

cin >> a;

switch (a){

  case 1:
      cout << "Enter first number for Addition" << endl;
      cin >> a1;

      cout << "Enter second number for Addition" << endl;
      cin >> b1;

      cout << "Addition of given two number is: " <<  a1 + b1 << endl;
      break;

  case 2:
      cout << "Enter first number for Subtraction" << endl;
      cin >> a1;

      cout << "Enter second number for Subtraction" << endl;
      cin >> b1;

      cout << "Subtraction of given two number is: " <<  a1 - b1 << endl;
      break;

  case 3:
      cout << "Enter first number for Multiplication" << endl;
      cin >> a1;

      cout << "Enter second number for Multiplication" << endl;
      cin >> b1;

      cout << "Multiplication of given two number is: " <<  a1 * b1 << endl;
      break;

  case 4:
      cout << "Enter first number for Division" << endl;
      cin >> a1;

      cout << "Enter second number for Division" << endl;
      cin >> b1;

      if(b1 == 0){
          cout << "Division by zero not allowed!" << endl;
      } else {
          cout << "Division of given two number is: " <<  a1 / b1 << endl;
      }
      break;

  default:
      cout << "Invalid Choice!" << endl;
}

return 0;
}











                                   // ✅(Same style, but with User Defined Functions)
#include <iostream>
using namespace std;

// User defined functions
void add(int x, int y) {
    cout << "Addition of given two numbers is: " << x + y << endl;
}

void subtract(int x, int y) {
    cout << "Subtraction of given two numbers is: " << x - y << endl;
}

void multiply(int x, int y) {
    cout << "Multiplication of given two numbers is: " << x * y << endl;
}

void divide(int x, int y) {
    if (y == 0) {
        cout << "Division by zero not allowed!" << endl;
    } else {
        cout << "Division of given two numbers is: " << x / y << endl;
    }
}

int main() {
    int a, a1, b1;

    cout << "From the given option pls choose anyone:\n";
    cout << "Press -> 1 for Addition operation\n";
    cout << "Press -> 2 for Subtraction operation\n";
    cout << "Press -> 3 for Multiplication operation\n";
    cout << "Press -> 4 for Division operation\n";
    cout << "Enter your choice: ";
    cin >> a;

    cout << "Enter first number: ";
    cin >> a1;

    cout << "Enter second number: ";
    cin >> b1;

    switch (a) {
        case 1:
            add(a1, b1);
            break;
        case 2:
            subtract(a1, b1);
            break;
        case 3:
            multiply(a1, b1);
            break;
        case 4:
            divide(a1, b1);
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}