/*
    Write a C program that reads in two integers and check whether the first integer is a multiple of the
    second integer.
    Sample Input: 9 3
    Sample Output:
    Input the first integer : Input the second integer:
    9 is a multiple of 3.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,n;

    printf("Input the first integer : ");
    scanf("%d", &x);
    printf("Input the second integer: ");
    scanf("%d", &n);

    if(x%n==0)
    {
        printf("\n%d is a multiple of %d.\n", x, n);
    }
    else
    {
        printf("\n%d is not a multiple of %d.\n", x, n);
    }

    return 0;
}
