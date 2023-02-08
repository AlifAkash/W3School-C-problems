/*
    Write a C program that reads three floating values and check if it is possible to make a triangle with
    them. Also calculate the perimeter of the triangle if the said values are valid.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    float line[3];
    int i;
    double p=0;

    for(i=0; i<3; i++){
        printf("Input %d'th number: ", i+1);
        scanf("%f", &line[i]);
    }

    if(line[0]+line[1] > line[2] && line[1]+line[2] > line[0] && line[0]+line[2] > line[1])
    {
        p = line[0]+line[1]+line[2];
        printf("perimeter of triangle: %0.2lf", p);
    }
    else
    {
        printf("Triangle not possible");
    }

    return 0;
}
