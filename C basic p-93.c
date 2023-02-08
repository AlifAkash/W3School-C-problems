/*
    Write a C program to check if a given number is nearly prime or not.
    Nearly prime number is a positive integer which is equal to product of two prime numbers.
    Sample Output:
    It is not a Nearly prime number.
*/

#include<stdio.h>
#include<stdlib.h>

int isPrime(int n)
{
     int c=0, i;
      for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }

    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(){

    int n;

    printf("Input a number: ");
    scanf("%d", &n);

    int mul=1;

    for(int i=2; i<n; i++)
    {
        if(n%i==0 && isPrime(i)==1)
        {
            mul *= i;
        }
    }

    if(mul==n)
    {
        printf("%d is Nearly prime\n",n);
    }
    else
    {
        printf("%d is not Nearly prime\n",n);
    }

    return 0;
}
