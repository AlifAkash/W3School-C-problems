/*
Write a C program to calculate a bike’s average consumption from the given total
distance (integer value) traveled (in km) and spent fuel (in liters, float number – 2 decimal point).
Test Data :
Input total distance in km: 350
Input total fuel spent in liters: 5
Expected Output:
Average consumption (km/lt) 70.000
*/
#include<stdio.h>
#include<stdlib.h>

int main(){

    int distance;
    float fuel;
    double average;

    printf("Input total distance in km: ");
    scanf("%d", &distance);
    printf("Input total fuel spent in liters: ");
    scanf("%f", &fuel);

    average = distance / fuel;

    printf("Average consumption (km/lt): %.3lf", average);

    return 0;
}
