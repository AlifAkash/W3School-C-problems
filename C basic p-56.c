/*
    Write a C program to shift given data by two bits to the left.
    Input value : 2
    Read the integer from keyboard-
    Integer value = 2
    The left shifted data is = 16 // (3 bit left shift gives 16. 2 bits gives 8)
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int x, y, a, b;

    printf("Input two value : ");
    scanf("%d %d", &x, &a);

    printf("Integer value = %d and %d\n", x, a);

    x<<=2;
    y=x;

    a>>=2;
    b=a;

    printf("The left shifted data is = %d\n",y);
    printf("The right shifted data is = %d\n",b);

    return 0;
}
