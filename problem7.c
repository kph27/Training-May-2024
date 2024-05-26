
/*
Author: PRABHATH KATTUPALLI

Write a program that takes a score (0-100) as input from the user and uses if statements to determine the corresponding grade:
	90-100: A
	80-89: B
	70-79: C
	60-69: D
	Below 60: F
	Print the grade.

DOC: 23rd May 2024
*/


#include<stdio.h>
int main(){
    int a;
    printf("Enter your grade: ");
    scanf("%d", &a);
    if(a<=100 && a>=90){
        printf("%d is A Grade", a);
    }
    else if(a<=89 && a>=80){
        printf("%d is B Grade", a);
    }
    else if(a<=79 && a>=70){
        printf("%d is C Grade", a);
    }
    else if(a<=69 && a>=60){
        printf("%d is D Grade", a);
    }
    else if(a<=60){
        printf("%d is F Grade", a);
    }
    else{
        printf("Please enter valid score(0-100)");
    }
}
