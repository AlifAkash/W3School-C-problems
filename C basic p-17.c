/*
Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
Test Data :
Input seconds: 25300
Expected Output:
There are:
H:M:S - 7:1:40
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    int value, res, h, m, s;

    printf("Input seconds: ");
    scanf("%d", &value);

    h = value / 3600;
    value = value % 3600;
    m = value / 60;
    value = value % 60;
    s = value;

    printf("H:M:S - %d:%d:%d", h, m, s);

    return 0;
}
