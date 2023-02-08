/*
    Write a C program that accepts principle, rate of interest, time and compute the simple interest.
    Test Data:
    Input Data: p = 10000, r = 10% , t = 12 year
    Expected Output:
    Input principle, Rate of interest & time to find simple interest:
    Simple interest = 12000
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    double i, n, p, r;

    printf("Input principle, Rate of interest & time to find simple interest: \n");
    printf("principle = ");
    scanf("%lf", &p);
    printf("Rate of interest = ");
    scanf("%lf", &r);
    printf("time = ");
    scanf("%lf", &n);

    i = (p*n*r)/100;

    printf("Simple interest = %0.2lf", i);


    return 0;
}
