/*
    Write a C program to read an array of length 5 and print the position and value of the array elements
    of value less than 5.
    Test Data:
    Input the 5 members of the array:
    15
    25
    4
    35
    40
    Expected Output:
    A[2] = 4.0
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int i;
    float n[5];

    printf("Input the 5 members of the array: \n");
    for(i=0; i<5 ; i++)
    {
        scanf("%f", &n[i]);
    }

    for(i=0; i<5; i++)
    {
        if(n[i]<5)
        {
            printf("A[%d] = %0.1f", i, n[i]);
        }
    }

    return 0;
}
