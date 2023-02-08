/*
     Write a C program to create enumerated data type for 7 days and display their values in integer
     constants.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    enum week {sun, mon, tue, wed, thu, fri, sat};

    printf("sum = %d\n",sun);
    printf("mon = %d\n",mon);
    printf("tue = %d\n",tue);
    printf("wed = %d\n",wed);
    printf("thu = %d\n",thu);
    printf("fri = %d\n",fri);
    printf("sat = %d\n",sat);

    return 0;
}
