/*
    Write a C program to print a binomial coefficient table.
    Mx 0 1 2 3 4 5 6 7 8 9 10
    ----------------------------------------------------------
    0 1
    1 1 1
    2 1 2 1
    3 1 3 3 1
    4 1 4 6 4 1
    5 1 5 10 10 5 1
    6 1 6 15 20 15 6 1
    7 1 7 21 35 35 21 7 1
    8 1 8 28 56 70 56 28 8 1
    9 1 9 36 84 126 126 84 36 9 1
    10 1 10 45 120 210 252 210 120 45 10 1
*/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{

    int m,x, binom;

    printf("X=");
    for(m=0; m<=10; m++)
    {
        printf("%4d", m);
    }
    printf("\nm=");
    printf("\n");

    m=0;

    do
    {
        printf("%2d", m);
        x = 0;
        binom = 1;

        while(x<=m)
        {
            if(m==0 || x==0)
            {
                printf("%4d",binom);
            }
            else
            {
                binom = binom*(m-x+1) / x;
                printf("%4d", binom);
            }
            x += 1;
        }
        printf("\n");
        m += 1;
    }
    while(m<=10);
    printf("\n");

    return 0;
}
