/*
    Write a program that reads two numbers and divide the first number by second number. If the
    division not possible print "Division not possible".
    Test Data :
    Input two numbers:
    x: 25
    y: 5
    Expected Output: 5.0
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int x, y;
    double res;

    printf("Input two numbers: \n");
    printf("X: ");
    scanf("%d", &x);

    printf("Y: ");
    scanf("%d", &y);

    if(y != 0)
    {
        res = (float)x/(float)y;
        printf("\n%0.1lf\n", res);
    }
    else
    {
        printf("\nDivision not possible\n");
    }

    return 0;
}
