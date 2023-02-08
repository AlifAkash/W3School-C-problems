/*
Write a C program that accepts three integers and find the maximum of three.
Test Data :
Input the first integer: 25
Input the second integer: 35
Input the third integer: 15
Expected Output:
Maximum value of three integers: 35
*/
#include<stdio.h>
#include<stdlib.h>

int main(){

    int first, second, third;
    int min, max;

    printf("Input the first integer: ");
    scanf("%d", &first);
    printf("Input the second integer: ");
    scanf("%d", &second);
    printf("Input the third integer: ");
    scanf("%d", &third);

    if(first > second){
        if(first > third){
           printf("Maximum value of three integers: %d", first);
        }
        else{
            printf("Maximum value of three integers: %d", third);
        }
    }
    else if(second > third){
        printf("Maximum value of three integers: %d", second);
    }
    else{
        printf("Maximum value of three integers: %d", third);
    }

    return 0;
}
