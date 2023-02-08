/*
    Write a C program to print 3 numbers in a line, starting from 1 and print n lines.
    Accept number of lines (n, integer) from the user.
    Test Data :
    Input number of lines: 5
    Expected Output:
    1 2 3
    4 5 6
    7 8 9
    10 11 12
    13 14 15
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int n, i, j, num=1;

    printf("Input number of lines: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}
