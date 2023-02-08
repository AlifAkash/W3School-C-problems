/*
    Write a C program to calculate and prints the squares and cubes of the numbers from 0 to 20 and uses
    tabs to display them in a table of values.
    Sample Output:
    Number Square Cube
    =========================
    0 0 0
    1 1 1
    2 4 8
    3 9 27
    .....
    18 324 5832
    19 361 6859
    20 400 8000
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int x, i, n;

    printf("Number Square Cube\n");
    printf("=========================\n");
    for(i=0; i<=20; i++)
    {
        x = i*i;
        n = i*i*i;

        printf("%d %d %d\n", i, x, n);
    }

    return 0;
}
