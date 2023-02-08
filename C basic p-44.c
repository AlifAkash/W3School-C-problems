/*
    Write a C program to calculate the average marks of mathematics of some students.
    Input 0 (excluding to calculate the average) or negative value to terminate the input process.
    Test Data :
    Input Mathematics marks (0 to terminate): 10
    15
    20
    25
    0
    Expected Output:
    Average marks in Mathematics: 17.50
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int n=1, i=0, sum=0;
    double avg = 0;

    printf("Input Mathematics marks (0 to terminate): \n");
    while(n!=0)
    {
        scanf("%d", &n);
        i++;
        if(n<0)
        {
            break;
        }
        sum += n;
    }

    i--;
    avg = (float)sum/(float)i;

    printf("Sum = %d\n", sum);
    printf("Average marks in Mathematics: %.2lf\n", avg);

    return 0;
}
