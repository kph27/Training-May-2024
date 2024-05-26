
/*
Author: PRABHATH KATTUPALLI
Program to find given number is Odd or Even
DOC: 23rd May 2024
*/


#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a%2==0){
        printf("%d is Even", a);
    }
    else{
        printf("%d is odd", a);
    }
return 0;
}
