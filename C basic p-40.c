/*
    Write a C program to find all numbers which are dividing by 7 and the remainder is equal to 2 or 3
    between two given integer numbers.
    Test Data :
    Input the first integer: 25
    Input the second integer: 45
    Expected Output:
    30
    31
    37
    38
    44
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int a, b, i;

    printf("Input the first integer: ");
    scanf("%d", &a);

    printf("Input the second integer: ");
    scanf("%d", &b);

    for(i=a; i<b; i++)
    {
        if(i%7==2 || i%7==3)
        {
           printf("%d\n",i);
        }
    }

    return 0;
}
