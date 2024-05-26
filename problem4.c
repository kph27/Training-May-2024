
/*
Author: PRABHATH KATTUPALLI
Write a program to convert Binary to decimal
DOC: 23rd May 2024
*/


#include<stdio.h>
int main(){
    long int a, b;
    printf("Enter a binary number: ");
    scanf("%ld",&a);
    
    b=a;
    
    int reminder, base=1, decimal=0;
    
    while(a!=0) {
        reminder = a%2;
        a /= 10;
        decimal += reminder * base;
        base *= 2;
    }
    
    printf("%ld in binary is %d  in decimal\n", b,decimal);
    return 0;
}
