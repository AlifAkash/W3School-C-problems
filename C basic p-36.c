/*
    Write a C program to read a password until it is correct. For wrong password print "Incorrect password"
    and for correct password print "Correct password" and quit the program. The correct password is 1234.
    Test Data :
    Input the password: 1234
    Expected Output:
    Correct password
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int pass, x=1;

    while(x != 0)
    {
        printf("Input the password: ");
        scanf("%d", &pass);

        if(pass == 1234)
        {
            printf("Correct password!\n");
            x = 0;
        }
        else
        {
            printf("Worng password\n");
        }

        printf("\n");

    }

    return 0;
}
