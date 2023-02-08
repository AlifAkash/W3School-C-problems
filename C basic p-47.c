/*
    Write a C program that reads an integer and find all its divisor.
    Test Data:
    Input an integer: 45
    Expected Output:
    All the divisor of 45 are:
    1
    3
    5
    9
    15
    45
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int i, n;

    printf("Input an integer: ");
    scanf("%d", &n);

    printf("All the divisor of %d are: \n", n);

    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
