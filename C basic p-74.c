/*
    Write a C program to display the integer equivalents of letters (a-z, A-Z). Go to the editor
    Sample Output:
    List of integer equivalents of letters (a-z, A-Z).
    ==================================================
    97 98 99 100 101 102
    103 104 105 106 107 108
    109 110 111 112 113 114
    115 116 117 118 119 120
    121 122 32 65 66 67
    68 69 70 71 72 73
    74 75 76 77 78 79
    80 81 82 83 84 85
    86 87 88 89 90
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char* letters= "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i, k=0;

    printf("List of integer equivalents of letters (a-z, A-Z).\n");
    printf("==================================================\n");

    for(i=0; i<53; i++)
    {
        printf("%d ", letters[i]);
        k++;
        if(k%6==0)
        {
            printf("%\n");
        }
    }

    return 0;
}
