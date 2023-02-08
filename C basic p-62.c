/*
    Write a C program that accepts a positive integer less than 500 and prints out the sum of the digits
    of this number.
    Input a positive number less than 500:
    Sum of the digits of 347 is 14
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int num, rem, i, a, sum=0;

    printf("Input a positive number less than 500: ");
    scanf("%d", &num);

    a = num;

    if(num > 500)
    {
        printf("Invalid input");
    }
    else
    {
        for(i=0; i<4; i++)
        {
            rem = num%10;
            sum += rem;
            num = num/10;
        }

        printf("Sum of the digits of %d is %d\n", a, sum);
    }

    return 0;
}
