/*
    Write a C program that reads the side (side sizes between 1 and 10 ) of a square and prints square
    using hash (#) character.
    Sample Input: 10
    Sample Output:

    Input the size of the square:
     # # # # # # # # # #
     # # # # # # # # # #
     # # # # # # # # # #
     # # # # # # # # # #
     # # # # # # # # # #
     # # # # # # # # # #
     # # # # # # # # # #
     # # # # # # # # # #
     # # # # # # # # # #
     # # # # # # # # # #
*/
#include<stdio.h>

int main(){

    int i, j, n;

    printf("Input the size of the square(sizes between 1 and 10 ): ");
    scanf("%d", &n);

    if(n<0 || n>10)
    {
        printf("\nInvalid input.\n");
        return 0;
    }

    printf("\n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("# ");
        }
        printf("\n");
    }

    return 0;
}
