/*
    Write a C program that accepts principal amount, rate of interest and days for a loan and calculate the
    simple interest for the loan, using the following formula.
    interest = principal * rate * days / 365.
    Sample Input:
    10000
    .1
    365
    0
    Sample Output:
    Input loan amount (0 to quit): Input interest rate: Input term of the loan in days: The interest amount
    is $1000.00
    Input loan principal_amt (0 to quit):
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{

    int amt;
    float inrst, rate, days;

    printf("Input loan amount (0 to quit): ");
    scanf("%d", &amt);

    while(amt!=0)
    {
        printf("Input interest rate: ");
        scanf("%f", &rate);
        printf("Input term of the loan in days: ");
        scanf("%f", &days);

        inrst = (float)amt * (float)rate * (float)(days/365);

        printf("The interest amount is $%0.2f\n", inrst);

        printf("Input loan amount (0 to quit): ");
        scanf("%d", &amt);

    }

    return 0;
}

