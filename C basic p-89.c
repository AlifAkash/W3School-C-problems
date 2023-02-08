/*
    Write a C programming to calculate (x + y + z) for each pair of integers x, y and z where
    -2^31 <= x, y, z<= 2^31-1.
    Sample Output:
    Result: 140733606875472
*/

#include<stdio.h>

int main()
{
    long x, y, z;

    printf("Input x, y and z: ");
    scanf("%li %li %li", &x, &y, &z);

    printf("Result : %li", x+y+z);

    return 0;
}
