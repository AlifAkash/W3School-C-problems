/*
    Write a C program to remove any negative sign in front of a number. Go to the editor
    Input a value (negative):
    Original value = -253
    Absolute value = 253
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,n;

    printf("Input a value (negative): ");
    scanf("%d", &x);

    if(x<0)
    {
        n = x*-1;
    }

    printf("Original value = %d\n", x);
    printf("Absolute value = %d\n", n);

    return 0;
}
