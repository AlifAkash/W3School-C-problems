/*
     Write a C program that reads two integers and checks whether they are multiplied or not.

    Test Data :
    Input the first number: 5
    Input the second number: 15
    Expected Output:
    Multiplied!
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int mul, div, temp;

    printf("Input the first number: ");
    scanf("%d", &div);
    printf("Input the second number: ");
    scanf("%d", &mul);

    if(div > mul)
    {
        temp = div;
        div = mul;
        mul = temp;
    }

    if(mul % div == 0)
    {
        printf("\nMultiplied!\n");
    }
    else
    {
        printf("\nNot multiplied\n");
    }

    return 0;
}
