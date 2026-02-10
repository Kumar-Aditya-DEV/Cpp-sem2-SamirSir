#include<iostream>
#include <cstdio>
using namespace std;

void palindrome(int n) {

    int original = n;
    int reverse = 0;

    while(n > 0) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if(original == reverse) {
        cout << "Palindrome Number";
    } else {
        cout << "Not a Palindrome Number";
    }
}

int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    palindrome(n);

    return 0;
}
