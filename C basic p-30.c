/*
    Write a C program to find and print the square of each one of the even values from 1 to a
    specified value.
    Test Data :
    List of square of each one of the even values from 1 to a 4 :
    Expected Output:
    2^2 = 4
    4^2 = 16
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int n, i, sqr;

    printf("Input a number you want to: ");
    scanf("%d", &n);

    printf("\nList of square of each one of the even values from 1 to a %d :",n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            printf("\n%d^%d = %d", i, 2, i*i);
        }
    }
    return 0;
}
