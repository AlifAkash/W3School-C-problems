/*
Write a C program to print the following characters in a reverse way. Go to the editor
Test Characters: 'X', 'M', 'L'
Expected Output:
The reverse of XML is LMX

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char s[10], temp;
    char s2[10];
    int i, len, left, right;

    printf("Enter your characters: ");
    scanf("%[^\n]s", &s);
    printf("Your characters is: %s\n", s);

    strcpy(s2, s);

    len =strlen(s);
    left = 0;
    right = len-1;

    for(i=left; i<right; i++){
        temp = s[i];
        s[i] = s[right];
        s[right] = temp;
        right--;
    }

    printf("The reverse of %s is: %s\n", s2, s);

    return 0;
}
