/*
    Write a C program to find all prime palindromes in the range of two given numbers x and y
    (5 <= x<y<= 1000,000,000).
    A number is called prime palindrome if the number is both a prime number and a palindrome.
    Sample Output:
    Input two numbers (separated by a space):
    List of prime palindromes:
    0
    1
*/

#include<stdio.h>

int main()
{
    int x, y, i, n, rem, newNum;

    printf("Input two numbers (separated by a space): ");
    scanf("%d %d", &x, &y);

    printf("List of prime palindromes: \n");
    for(i=x; i<y; i++)
    {
        n=i;
        rem = n%10;
        n = n/10;
        newNum = n*10+rem;
        if(newNum==i)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
