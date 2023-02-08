/*
    Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers.
    Test Data :
    Input the first number: 5
    Input the second number: -4
    Input the third number: 10
    Input the fourth number: 15
    Input the fifth number: -1
    Expected Output:
    Number of positive numbers: 3
    Number of negative numbers: 2
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int no[5], i, pos=0, neg=0;

    for(i=0; i<5; i++)
    {
        printf("Input the %d'th number: ", i+1);
        scanf("%d", &no[i]);
    }

    for(i=0; i<5; i++)
    {
        if(no[i]>0)
        {
            pos++;
        }
        if(no[i]<0)
        {
            neg++;
        }
    }

    printf("\nNumber of positive numbers: %d\n", pos);
    printf("Number of negative numbers: %d\n", neg);

    return 0;
}

