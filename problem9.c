
/*
Author: PRABHATH KATTUPALLI

BMI Calculator:
Write a program that calculates the Body Mass Index (BMI) based on user input for weight (in kg) and height (in meters). Use if statements to classify the BMI into categories:
	Below 18.5: Underweight
	18.5 to 24.9: Normal weight
	25 to 29.9: Overweight
	30 and above: Obesit

yDOC: 23rd May 2024
*/


#include<stdio.h>
int main(){
    float a, b, bmi;
    printf("Enter your weight(in kg): ");
    scanf("%f", &a);
    printf("Enter your height(in meters): ");
    scanf("%f", &b);
    bmi = a/(b*b);
    if(bmi<18.5){
        printf("Underweight");
    }
    else if(bmi<=24.9 && bmi>=18.5){
        printf("Normal weight");
    }
    else if(bmi<=29.9 && bmi>=25){
        printf("Overweight");
    }
    else if(bmi>30){
        printf("Obesity");
    }
}
