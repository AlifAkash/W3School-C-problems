/*
    Write a C program to calculate and print the average of some integers. Accept all the values preceding 888.
    Sample Input:12
    15
    24
    888
    Sample Output:
    Input each number on a separate line (888 to exit):

    The average value of the said numbers is 17.000000
*/
#include<stdio.h>

int main()
{

    int cnt=0;
    double n, sum=0, avg;

    printf("Input each number on a separate line (888 to exit): \n");
    scanf("%lf", &n);
    while(n!=888)
    {
        sum += n;
        cnt++;
        scanf("%lf", &n);
    }

    avg = sum/(double)cnt;

    printf("The average value of the said numbers is %lf", avg);

    return 0;
}
