/*
    Write a C program to compute the sum of consecutive odd numbers from a given pair of integers.
    Test Data :
    Input a pair of numbers (for example 10,2):
    Input first number of the pair: 10
    Input second number of the pair: 2
    Expected Output:
    List of odd numbers: 3
    5
    7
    9
    Sum=24
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int high, low, i, sum=0;

    printf("Input a pair of numbers (for example 10,2): \n");
    printf("Input first number of the pair:  ");
    scanf("%d", &high);
     printf("Input second number of the pair:  ");
    scanf("%d", &low);

    printf("List of odd numbers: \n");
    for(i=low; i<=high; i++)
    {
        if(i%2==1){
            printf("%d\n", i);
            sum += i;
        }
    }

    printf("Sum = %d", sum);


    return 0;
}
