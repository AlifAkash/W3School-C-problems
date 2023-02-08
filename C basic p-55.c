/*
    Write a C program that swaps two numbers without using third variable.
    Input value for x & y:
    Before swapping the value of x & y: 5 7
    After swapping the value of x & y: 7 5
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int x,y, temp;

    printf("Input value for x & y: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping the value of x & y: %d %d\n", x,y);

    temp = x;
    x = y;
    y = temp;

    printf("After swapping the value of x & y: %d %d\n", x, y);

    return 0;
}
