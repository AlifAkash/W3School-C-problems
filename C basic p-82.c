/*
    Write a C program that reads in a five-digit integer and determines whether or not it’s a palindrome.
    Sample Input: 33333
    Sample Output:

    Input a five-digit number: 33333 is a palindrome.
*/
#include<stdio.h>

int main()
{

    int n, newNum=0, remainder, absNum, ctr=0;

    printf("Input a five-digit number:): ");
    scanf("%d", &n);

    absNum = n;

    while(n != 0)
    {
        remainder = n%10;
        n = n/10;
        newNum = newNum*10+remainder;
        ctr++;
    }

    if(ctr>5)
    {
        printf("Interger length is greater than 5 digit.");
    }
    else
    {
        if(newNum == absNum)
        {
            printf("%d is a palindrome.", absNum);
        }
        else
        {
            printf("%d is not a palindrome.", absNum);
        }
    }

    return 0;
}

