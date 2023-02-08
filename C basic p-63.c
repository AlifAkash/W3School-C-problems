/*
Write a C program that accepts a positive integer n less than 100 from the user and prints out the
sum 14 + 24 + 44 + 74 + 114 + • • • + m4 , where m is less than or equal to n. Print appropriate message.
Input a positive number less than 100: 68
Sum of the series is 37361622
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n, i, sum=0, p;

    printf("Input a positive number less than 100: ");
    scanf("%d", &n);

    if(n > 100)
    {
        printf("Invalid input");
    }
    else
    {
        p = 1;
        for(i=1; p<=n; i++)
        {
            sum += p * p * p * p;
            p += i;
        }

        printf("Sum of the series is %d\n", sum);
    }

    return 0;
}
