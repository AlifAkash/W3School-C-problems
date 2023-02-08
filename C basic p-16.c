/*
Write a C program to read an amount (integer value) and break the amount into smallest
possible number of bank notes.
Test Data :
Input the amount: 375
Expected Output:
There are:
3 Note(s) of 100.00
1 Note(s) of 50.00
1 Note(s) of 20.00
0 Note(s) of 10.00
1 Note(s) of 5.00
0 Note(s) of 2.00
0 Note(s) of 1.00
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int amount, res;

    printf("Input the amount: ");
    scanf("%d", &amount);

    res = amount/100;
    printf("%d Note(s) of 100.00\n", res);
    amount = amount%100;
    res = amount/50;
    printf("%d Note(s) of 50.00\n", res);
    amount = amount%50;
    res = amount/20;
    printf("%d Note(s) of 20.00\n", res);
    amount = amount%20;
    res = amount/10;
    printf("%d Note(s) of 10.00\n", res);
    amount = amount%10;
    res = amount/5;
    printf("%d Note(s) of 5.00\n", res);
    amount = amount%5;
    res = amount/2;
    printf("%d Note(s) of 2.00\n", res);
    amount = amount%2;
    res = amount/1;
    printf("%d Note(s) of 1.00\n", res);

    return 0;
}
