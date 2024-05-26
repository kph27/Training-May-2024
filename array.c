
/*
Author: PRABHATH KATTUPALLI
Print Array and Reverse Array
DOC: 23rd May 2024
*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n], i;
    printf("Enter the array elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("The array elements are: \n");
    for(i=0;i<n;i++){
        printf("%d\t", a[i]);
    }
    printf("\nThe reverse array elements are: \n");
    for(i=n-1;i>=0;i--){
        printf("%d\t", a[i]);
    }
    return 0;
}
