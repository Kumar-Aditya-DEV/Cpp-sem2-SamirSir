#include<iostream>
#include <cstdio> 
using namespace std;

void printFibonacci(int n) {

    int a = 0;
    int b = 1;

    cout << a << " " << b << " ";

    for(int i = 1; i <= n; i++){
        int nextNumber = a + b;
        cout << nextNumber << " ";
        a = b;
        b = nextNumber;
    }
}

int main(){

     int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printFibonacci(n);

    return 0;
}
