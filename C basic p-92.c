/*
    Write a C program to find the last non-zero digit of the factorial of a given positive integer.
    For example for 5!, the output will be "2" because 5! = 120, and 2 is the last nonzero digit of 120
    Sample Output:
    Input a positive number:
    The last non-zero digit of the said factorial:
    0
*/

#include<stdio.h>
#include<stdlib.h>

int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    int x, num, rem;

    printf("Input a positive number: ");
    scanf("%d", &x);

    num = fact(x);

    while (num>0)
    {
        rem = num%10;
        if(rem!=0)
        {
            break;
        }
        else
        {
            num = num/10;
        }

    }

    printf("The last non-zero digit of the said factorial: %d", rem);

    return 0;
}
