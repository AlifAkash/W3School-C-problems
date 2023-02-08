/*
    Write a C program that accepts one seven-digit number and separates the number into its individual digits, and prints the digits separated from one another by two spaces each. Go to the editor
    Sample Input: 2345678
    Input a seven digit number:
    Output: 2 3 4 5 6 7 8
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int x, i, quotient, n=1000000;

    printf("Input a seven digit number: ");
    scanf("%d", &x);

    printf("Output:");
    for(i=0; i<7; i++)
    {
        quotient = x/n;
        printf("%2d", quotient);
        x = x%n;
        n /= 10;
    }

    return 0;
}
