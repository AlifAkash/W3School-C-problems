/*
Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches.
and width of 5 inches.
Expected Output:
Perimeter of the rectangle = 24 inches
Area of the rectangle = 35 square inches
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int perimeter(int height, int width){
    int result = 2*(height+width);
    return result;
}

int area(int height, int width){
    int result = height*width;
    return result;
}

int main(){

    int height, width;

    printf("Enter the height of the ractangle: ");
    scanf("%d", &height);

    printf("Enter the width of the ractangle: ");
    scanf("%d", &width);

    printf("Perimeter of the rectangle = %d inches\n", perimeter(height, width));

    printf("Area of the rectangle = %d square inches\n", area(height, width));

    return 0;
}
