/*
    Write a C program which reads an integer (7 digits or fewer) and count number of 3s in the given number.
    Sample Input: 538453
    Sample Output:
    Input a number: The number of threes in the said number is 2
*/
#include<stdio.h>

int main()
{

    int n, i, rem, cnt=0;

    printf("Input a number(7 digits or fewer): ");
    scanf("%d", &n);

    for(i=0; n!=0; i++)
    {
        rem = n%10;
        n = n/10;
        if(rem==3)
        {
            cnt++;
        }
    }

    if(i>7)
    {
        printf("Interger length is greater than 7 digit.");
    }
    else
    {
        printf("The number of threes in the said number is %d\n", cnt);
    }

    return 0;
}
