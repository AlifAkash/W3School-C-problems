/*
    Write a C program using looping to produce the following table of values. Go to the editor
    Sample Output:

    x       x+2     x+4     x+6
    --------------------------------
    1       3       5       7
    4       6       8       10
    7       9       11      13
    10      12      14      16
    13      15      17      19
*/
#include<stdio.h>

int main(){

    int i, j, x, cnt=0;

    printf("x\tx+2\tx+4\tx+6\n");
    printf("--------------------------------\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<20; j+=2)
        {
            printf("%d\t",j+1);
            cnt++;
            if(cnt%4==0)
            {
                printf("\n");
            }
        }
    }

    return 0;
}
