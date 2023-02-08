/*
Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers.
Display a message if it is not possible to find the roots.
Test Data :
Input the first number(a): 25
Input the second number(b): 35
Input the third number(c): 12
Expected Output:
Root1 = -0.60000
Root2 = -0.80000
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{

    double a, b, c, r1, r2, ch;

    printf("Input the first number(a): ");
    scanf("%lf", &a);

    printf("Input the second number(b): ");
    scanf("%lf", &b);

    printf("Input the third number(c): ");
    scanf("%lf", &c);

    ch = (b*b)-(4*a*c);

    if(ch > 0 && a != 0)
    {
        r1 = (-b + sqrt(ch))/ (2*a);
        r2 = (-b - sqrt(ch))/ (2*a);

        printf("Root1 = %.5lf\n", r1);
        printf("Root2 = %.5lf\n", r2);
    }
    else
    {
        printf("it is not possible to find the roots!!");
    }


    return 0;
}
