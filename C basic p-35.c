/*
    Write a C program to check whether two numbers in a pair is in ascending order or descending order.
    Test Data :
    Input a pair of numbers (for example 10,2 : 2,10):
    Input first number of the pair: 10
    Input second number of the pair: 2
    Expected Output:
    The pair is in descending order!
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int num1, num2;

    printf("Input a pair of numbers (for example 10,2 : 2,10): \n");
    printf("Input first number of the pair:  ");
    scanf("%d", &num1);
     printf("Input second number of the pair:  ");
    scanf("%d", &num2);

    if(num1>num2)
    {
        printf("\nThe pair is in descending order!\n");
    }
    else if(num1<num2)
    {
        printf("\nThe pair is in ascending order!\n");
    }

    return 0;
}
