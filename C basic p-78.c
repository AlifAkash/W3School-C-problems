/*
    Write a C program to demonstrates the difference between predecrementing and postdecrementing using
    the decrement operator --.
    Sample Output:
    Predecrementing:
    x = 10
    x-- = 10
    x = 9
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{

    int x=10;

    printf("postdecrementing : \n");
    printf("X = %d\n", x);
    printf("X-- = %d\n", x--);
    printf("X = %d\n", x);

    x = 10;
    printf("postdecrementing : \n");
    printf("X = %d\n", x);
    printf("--X = %d\n", --x);
    printf("X = %d\n", x);

    return 0;
}
