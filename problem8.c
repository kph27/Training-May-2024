
/*
Author: PRABHATH KATTUPALLI

Temperature Advice:
Write a program that takes a temperature value as input and uses if statements to print advice based on the temperature:
	Above 30: "It's hot outside, stay hydrated!"
	Between 20 and 30: "The weather is nice and warm."
	Between 10 and 19: "It's a bit chilly, wear a jacket."
	Below 10: "It's cold outside, stay warm!"

DOC: 23rd May 2024
*/


#include<stdio.h>
int main(){
    int a;
    printf("Enter temperature: ");
    scanf("%d", &a);
    if(a>30){
        printf("It's hot outside, stay hydrated!");
    }
    else if(a<=30 && a>=20){
        printf("The weather is nice and warm");
    }
    else if(a<=19 && a>=10){
        printf("It's a bit chilly, wear a jacket");
    }
    else if(a<10){
        printf("It's cold outside, stay warm!");
    }
}
