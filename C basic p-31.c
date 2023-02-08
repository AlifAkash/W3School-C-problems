/*
    Write a C program to check whether a given integer is positive even, negative even,
    positive odd or negative odd. Print even if the number is 0.
    Test Data :
    Input an integer: 13
    Expected Output:
    Positive Odd
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;

    printf("Input an integer: ");
    scanf("%d", &n);

    if(n>0 && n%2==0)
    {
        printf("\nPositive Even\n");
    }
    else if(n>0 && n%2==1)
    {
        printf("\nPositive Odd\n");
    }
    else if(n<0 && n%2==0)
    {
        printf("\nNegative Even\n");
    }
    else if(n<0 && n%2==-1)
    {
        printf("\nNegative Odd\n");
    }
    else if(n==0)
    {
        printf("\nEven\n");
    }

    return 0;
}
