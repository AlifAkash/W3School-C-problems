/*
    Write a C program to reverse and print a given number. Go to the editor
    Input a number:
    The original number = 234
    The reverse of the said number = 432
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int num, x, reNum;

    printf("Input a number: ");
    scanf("%d", &num);

    printf("The original number = %d\n", num);

    while(num>1)
    {
        x = num%10;
        reNum = reNum*10+x;
        num = num/10;

    }

    printf("The reverse of the said number = %d", reNum);

    return 0;
}
