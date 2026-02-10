#include<iostream>
#include <cstdio> 
using namespace std;
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if( a >= 0){
        printf("pOSITIVE");
    }
    else if (a <= 0){
        printf("Negative");
    }
    else{
        printf("Zero"); 
    }

    if(a % 2 == 0){
        printf("Even");
    }
    else{
        printf("Odd");
    }


    return 0;
}