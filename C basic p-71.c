/*
    Write a C program to copy a given string into another and count the number of characters copied.
    Input a string
    Original string: w3resource
    Number of characters = 10
*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{

    char s1[100], s2[100];
    int i;

    printf("Input a string : ");
    scanf("%s",&s2);

    for(i=0; s2[i]!='\0'; i++)
    {
        s1[i]=s2[i];
    }
    printf("\n");
    printf("Original string: %s\n",s2);
    printf("Number of characters = %d\n", i);

    return 0;
}
