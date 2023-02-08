/*
    Write a C program that accepts a distance in centimeters and prints the corresponding value in inches.
    Test Data:
    Input Data: 500cms
    Input the distance in cm:
    Distance of 500.00 cms is = 196.85 inches
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    double cm, inch;

    printf("Input Data(in cm): ");
    scanf("%lf", &cm);

    inch = cm/2.54;

    printf("Distance of %0.2lf cms is = %0.2lf inches", cm, inch);


    return 0;
}
