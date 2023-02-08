/*
     Write a C program to calculate the value of S where S = 1 + 1/2 + 1/3 + … + 1/50.
    Expected Output:
    Value of S: 4.50
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int i;
    float s=0;

    for(i=1; i<=50; i++)
    {
        s += (float)1/(float)i;
    }

    printf("Value of S: %0.2f\n", s);

    return 0;
}
