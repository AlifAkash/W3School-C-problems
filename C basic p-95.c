/*
    Write a C program to print the corresponding Fahrenheit to Celsius and Celsius to Fahrenheit.
    Both cases initial tempratue = 0, maximum temperature = 150 and step 10
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int i;
    float fahr=0,cel=0;

    printf("Fahrenheit  to  Celsius\n");
    printf("-----------------------\n");
    printf("Fahrenheit\tCelsius\n");

    for(i=0; i<=150; i+=10)
    {
        fahr = i;
        cel = (i-32.0)*0.5556;
        printf("%0.1f\t\t%0.1f\n", fahr, cel);
    }

    printf("\n\n");

    cel =0;
    fahr = 0;

    printf("Celsius  to  Fahrenheit\n");
    printf("-----------------------\n");
    printf("Celsius\t\tFahrenheit\n");

    for(i=0; i<=150; i+=10)
    {
        cel = i;
        fahr = (1.80*i)+32;
        printf("%0.1f\t\t%0.1f\n", cel, fahr);
    }






    return 0;
}
