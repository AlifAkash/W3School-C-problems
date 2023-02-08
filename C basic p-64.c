/*
    Write a C program that accepts integers from the user until a zero or a negative number, display the
    number of positive values, the minimum value, the maximum value and the average of all numbers.
    Input a positive integer:
    Input next positive integer: 15
    Input next positive integer: 25
    Input next positive integer: 37
    Input next positive integer: 43
    Number of positive values entered is 4
    Maximum value entered is 43
    Minimum value entered is 15
    Average value is 30.0000
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{

    int x, i=1, n=0, ctr=0, num[100], min, max, sum=0;
    float avg=0;

    printf("Input a positive integer: ");
    scanf("%d", &x);
    num[0] = x;

    if(x<=0)
    {
        printf("No positive number entered : \n");
    }

    else
    {
        while(x > 0)
        {
            printf("i= %d\n", i);
            printf("Input next positive integer : ");
            scanf("%d", &x);
            num[i] = x;
            i += 1;
            ctr++;
        }

        n=i-1;

        for(i=0; i<n; i++)
        {
            printf("%d\n", num[i]);
            sum += num[i];
        }
        printf("sum = %d\n", sum);

        printf("Number of positive values entered is %d\n", ctr);

        min = num[0];
        max = num[0];

        for(i=0; i<n; i++)
        {
            if(min > num[i])
            {
                min = num[i];
            }
            if(max < num[i])
            {
                max = num[i];
            }
        }


        printf("Maximum value entered is : %d\n", max);
        printf("Minimum value entered is :%d\n", min);

        avg = (float)sum / (float)ctr;

        printf("Average value is %0.4f\n", avg);

    }

    return 0;
}
