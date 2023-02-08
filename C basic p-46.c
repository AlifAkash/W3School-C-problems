/*
    Write a C program to calculate the value of S where S = 1 + 3/2 + 5/4 + 7/8.
    Expected Output:
    Value of series: 4.62
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int i, j=1;
    float s=0, d=0;

    for(i=1; i<=7; i+=2)
    {
        d = (float)i/(float)j;
        s += d;
        j = j*2;
    }

    printf("Value of S: %0.2f\n", s);

    return 0;
}

