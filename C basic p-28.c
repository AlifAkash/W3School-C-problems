/*
    Write a C program that read 5 numbers and counts the number of positive numbers and print the
    average of all positive values.
    Test Data :
    Input the first number: 5
    Input the second number: 8
    Input the third number: 10
    Input the fourth number: -5
    Input the fifth number: 25
    Expected Output:
    Number of positive numbers: 4
    Average value of the said positive numbers: 12.00
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int i, pos=0;
    double num[5], sum=0, avg;

    for(i=0; i<5; i++)
    {
        printf("Input the %d'th number: ", i+1);
        scanf("%lf", &num[i]);
    }

    for(i=0; i<5; i++)
    {
        if(num[i]>0)
        {
            pos++;
            sum += num[i];
        }
    }

    avg = sum/pos;

    printf("\nNumber of positive numbers: %d\n", pos);
    printf("Average value of the said positive numbers: %0.2lf\n", avg);

    return 0;
}
