/*
    Write a C program that read 5 numbers and sum of all odd values between them.
    Test Data :
    Input the first number: 5
    Input the second number: 7
    Input the third number: 9
    Input the fourth number: 10
    Input the fifth number: 13
    Expected Output:
    Sum of all odd values: 34
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int num[5], sum=0, i;

    for(i=0; i<5; i++)
    {
        printf("Input the %d'th number: ", i+1);
        scanf("%d", &num[i]);

        if(num[i]%2==1)
        {
            sum += num[i];
        }
    }

    printf("\nSum of all odd values: %d\n", sum);

    return 0;
}
