/*
    Write a C program that accepts some integers from the user and find the highest value
    and the input position.
    Test Data :
    Input 5 integers:
    5
    7
    15
    23
    45
    Expected Output:
    Highest value: 45
    Position: 5
*/
#include<stdio.h>
#include<stdlib.h>

int main(){

    int value[5], i, j, max=0, numPos=0;

    printf("Input 5 integers: \n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &value[i]);
    }

    for(j=0; j<5; j++)
    {
        if(value[j] > max)
        {
            max = value[j];
            numPos = j;
        }
    }

    printf("Highest value: %d\n", max);
    printf("Position: %d\n", numPos+1);

    return 0;
}

