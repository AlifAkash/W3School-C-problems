/*
    Write a C program that accepts 4 real numbers from the keyboard and print out the difference of the
    maximum and minimum values of these four numbers.
    Input four numbers: 1.54 1.236 1.3625 1.002
    Difference is 0.5380
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float n[4], max, min, dif;
    int i;

    printf("Input four numbers: ");
    for(i=0; i<4; i++)
    {
        scanf("%f", &n[i]);
    }

    min = n[0];
    max = n[0];

    for(i=0; i<4; i++)
    {
        if(min>n[i])
        {
            min = n[i];
        }
        if(max<n[i])
        {
            max = n[i];
        }
    }

    dif = max - min;

    printf("\nMin = %0.4f and max= %0.4f\n", min, max);
    printf("Difference is = %0.4f", dif);

    return 0;
}
