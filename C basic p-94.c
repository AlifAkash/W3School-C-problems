/*
    Write a C program to calculate body mass index and display the grade.
    Sample Output:
    Input the weight: 65
    Input the height: 5.6
    BMI = 2.072704

    Grade: Under
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    float h, w;
    double BMI;

    printf("Input the weight(kg): ");
    scanf("%f", &w);

    printf("Input the height(feet): ");
    scanf("%f", &h);

    float meter = h*0.304;

    BMI = (double)w/(meter*meter);

    printf("BMI = %f\n", BMI);

    if(BMI<18.5)
    {
        printf("Grade: Under.");
    }
    else if(18.5 <= BMI < 25.0)
    {
        printf("Grade: Normal.");
    }
    else if(25.0 <= BMI < 30.0)
    {
        printf("Grade: Over.");
    }
    else (30.0 <= BMI);
    {
        printf("Grade: Obesity.");
    }

    return 0;
}
