/*
    Write a C program to count blanks, tabs, and newlines in an input text.

    Sample Output:
    Number of blanks, tabs, and newlines:
    Input few words/tab/newlines
    The quick
    brown fox jumps
    over the lazy dog
    ^Z
    blank=7,tab=2,newline=3
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int blank_char=0, teb_char=0, new_char=0;
    int c=0;

    printf("Number of blanks, tabs, and newlines: \n");
    printf("Input few words/tab/newlines: \n");
    while((c=getchar())!=EOF)
    {
        if(c==' ')
        {
            ++blank_char;
        }
        if(c=='\t')
        {
            ++teb_char;
        }
        if(c=='\n')
        {
            ++new_char;
        }
    }

    printf("blank=%d,tab=%d,newline=%d", blank_char, teb_char, new_char);

    return 0;
}
