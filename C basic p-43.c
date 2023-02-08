/*
    Write a C program that reads two integers p and q, print p number of lines in a sequence of 1 to q in
    a line.
    Test Data :
    Input number of lines: 5
    Number of characters in a line: 6
    Expected Output:
    1 2 3 4 5 6
    7 8 9 10 11 12
    13 14 15 16 17 18
    19 20 21 22 23 24
    25 26 27 28 29 30
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int n, m, i, j, num=1;

    printf("Input number of lines: ");
    scanf("%d", &n);
    printf("Number of characters in a line: ");
    scanf("%d", &m);

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}
