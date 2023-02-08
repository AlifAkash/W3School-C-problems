/*
    Write a C program to read an array of length 6, change the first element by the last, the
    second element by the fifth and the third element by the fourth. Print the elements of the
    modified array.
    Test Data:
    Input the 5 members of the array:
    15
    20
    25
    30
    35

    Expected Output:
    array_n[0] = 35
    array_n[1] = 30
    array_n[2] = 25
    array_n[3] = 20
    array_n[4] = 15
*/

#include<stdio.h>
#include<stdlib.h>
#define max 6

int main(){

    int i, temp;
    int n[max];

    printf("Input the 6 members of the array: \n");
    for(i=0; i<max ; i++)
    {
        scanf("%d", &n[i]);
    }

    for(i=0; i<max/2; i++)
    {
         temp = n[i];
         n[i] = n[max-i-1];
         n[max-i-1] = temp;
    }

    printf("After swap array is: \n");

    for(i=0; i<max; i++)
    {
        printf("array_n[%d] = %d\n",i, n[i]);
    }

    return 0;
}

