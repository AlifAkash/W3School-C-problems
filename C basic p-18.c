/*
Write a C program to convert a given integer (in days) to years, months and days, assumes
that all months have 30 days and all years have 365 days.
Test Data :
Input no. of days: 2535
Expected Output:
6 Year(s)
11 Month(s)
15 Day(s)
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    int value, y, m, d;

    printf("Input no. of days: ");
    scanf("%d", &value);

    y = value / 356;
    value = value % 365;
    m = value / 30;
    value = value % 30;
    d = value;

    printf("%d Year(s)\n%d Month(s)\n%d Day(s)", y, m, d);

    return 0;
}
