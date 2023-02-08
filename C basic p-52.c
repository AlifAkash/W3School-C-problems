/*
    Write a C program to read an array of length 6 and find the smallest element and its position.
    Test Data:
    Input the length of the array: 5 Input the array elements:
    25
    35
    20
    14
    45
    Expected Output:
    Smallest Value: 14
    Position of the element: 3
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int i, n, min, pos;

    printf("Input the length of the array: \n");
    scanf("%d", &n);

    int arr[n];

    printf("Input the 5 members of the array: \n");
    for(i=0; i<n ; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    pos = 0;

    for(i=0; i<n; i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
            pos = i;
        }
    }

    printf("Smallest Value: %d\n", min);
    printf("Position of the element: %d\n", pos+1);

    return 0;
}
