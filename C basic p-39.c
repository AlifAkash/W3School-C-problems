/*
    Write a C program to calculate the sum of all number not divisible by 17 between two given integer
    numbers.
    Test Data :
    Input the first integer: 50 Input the second integer: 99
    Expected Output:
    Sum: 3521
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int a, b, i, sum=0;

    printf("Input the first integer: ");
    scanf("%d", &a);

    printf("Input the second integer: ");
    scanf("%d", &b);

    for(i=a; i<=b; i++)
    {
        if(i%17!=0)
        {
           sum += i;
        }
    }

     printf("\nsum = %d\n", sum);

    return 0;
}
