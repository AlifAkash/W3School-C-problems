/*
    Write a C program to print all numbers between 1 to 100 which divided by a specified number
    and the remainder will be 3.
    Test Data :
    Input an integer: 25
    Expected Output:
    3
    28
    53
    78
*/
#include<stdio.h>
#include<stdlib.h>

int main(){

    int n, i;

    printf("Input an integer(1-99): ");
    scanf("%d", &n);

    for(i=0; i<100; i++)
    {
        if(i%n==3)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
