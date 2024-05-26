/*
 Author: PRABHATH KATTUPALLI
To calculate Area and Circumference of a circle
DOC: 23rd May 2024
 */

#include<stdio.h>
#define PI 3.14159
int main(){
    float r;
    float area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    area = PI*r*r;
    circumference = 2*PI*r;
    printf("Area of the circle = %f\n", area);
    printf("Circumference of the circle = %f", circumference);
    return 0;
}
