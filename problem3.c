
/*
Author: PRABHATH KATTUPALLI
Write a  C program that performs temperature conversions between Celsius to Fahrenheit.
DOC: 23rd May 2024
*/


#include<stdio.h>
int main(){
	float celsius, fahrenheit;
	printf("Enter the temperature in Celsius: ");
	scanf("%f", &celsius);
	fahrenheit = (celsius*9/5)+32;
	printf("Temperature in Fahrenheit: %f", fahrenheit);
	return 0;
}
