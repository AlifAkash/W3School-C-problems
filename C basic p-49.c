/*
    Write a C program to read and print the elements of an array of length 7, before print, put the triple
    of the previous position starting from the second position of the array.
    For example, if the first number is 2, the array numbers must be 2, 6, 18, 54 and 162
    Test Data:
    Input the first number of the array: 5
    Expected Output:
    n[0] = 5
    n[1] = 15
    n[2] = 45
    n[3] = 135
    n[4] = 405
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int i, n[5], x;

    printf("Input the 5 members of the array: \n");
    scanf("%d", &x);
    for(i=0; i<5 ; i++)
    {
        n[i] = x;
         x *= 3;
    }

    printf("Array values are: \n");
    for(i=0; i<5; i++)
    {
        printf("n[%d] = %d\n", i, n[i]);
    }

    return 0;
}
