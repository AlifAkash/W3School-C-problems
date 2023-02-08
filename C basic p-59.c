/*
    Write a C program to display sum of series 1 + 1/2 + 1/3 + ………. + 1/n.
    Input any number: 1 + 1/0
    Sum = 1/0
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float sum=0.0f;
    int i, n;

    printf("Input any number upto which you the series: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        sum += (float)1/(float)i;
        if(i==1)
        {
            printf("\n%d + ", 1);
        }
        else if(i==n)
        {
            printf("%d/%d ", 1, i);
        }
        else
        {
            printf("%d/%d + ", 1, i);
        }
    }

    printf("= %0.4f\n", sum);

    return 0;
}
