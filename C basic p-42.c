/*
    Write a C program to print a number, it’s square and cube in a line, starting from 1 and print n lines.
    Accept number of lines (n, integer) from the user.
    Test Data :
    Input number of lines: 5
    Expected Output:
    1 1 1
    2 4 8
    3 9 27
    4 16 64
    5 25 125
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int n, i;
    int sqrt, cube;

    printf("Input number of lines: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("%d %d %d\n", i, i*i, i*i*i);
    }

    return 0;
}
