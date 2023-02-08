/*
    Write a C program to evaluate the equation y=xn when n is a non-negative integer.
    Input the values of x and n: 256
    x=256.000000; n=0;
    x to power n=1.000000
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,i;
    float x, res=1;

    printf("Input the values of x and n: \n");

    printf("x = ");
    scanf("%f", &x);
    printf("n = ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        res = res * x;
    }

    printf("\nx=%f and n=%d\n", x, n);
    printf("x to power n = %f\n", res);

    return 0;
}

