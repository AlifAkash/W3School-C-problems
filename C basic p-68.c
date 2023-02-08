/*
    Write a C program to print the powers of 2 table for the power 0 to 10, both positive and negative.
    =======================================
    n 2 to power n 2 to power -n
    =======================================
    0 1 1.000000000000
    1 2 0.500000000000
    2 4 0.250000000000
    3 8 0.125000000000
    4 16 0.062500000000
    5 32 0.031250000000
    6 64 0.015625000000
    7 128 0.007812500000
    8 256 0.003906250000
    9 512 0.001953125000
    10 1024 0.000976562500
*/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(){

    int n,i, x=1;
    double y=1;

    printf("=======================================\n");
    printf("n 2 to power n 2 to power -n\n");
    printf("=======================================\n");

    for(i=0; i<=10; i++)
    {
        printf("%d %d %lf\n",i,x,y);
        y = (double)1/(double)(2*x);
        x = 2*x;
    }
    return 0;
}
