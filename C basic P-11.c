/*
Write a C program that accepts two item’s weight (floating points' values ) and number of purchase
(floating points' values) and calculate the average value of the items.
Test Data :
Weight - Item1: 15
No. of item1: 5
Weight - Item2: 25
No. of item2: 4
Expected Output:
Average Value = 19.444444
*/
#include<stdio.h>
#include<stdlib.h>

double avg(double item1, double item2, double NoOfItem1, double NoOfItem2){

    double totalWeightItem1 = (item1 * NoOfItem1);
    double totalWeightItem2 = (item2 * NoOfItem2);

    double totalItem = NoOfItem1 + NoOfItem2;
    double totalWeigth = totalWeightItem1 + totalWeightItem2;

    double avrg = totalWeigth / totalItem;

    return avrg;
}

int main(){

    double item1, item2, NoOfItem1, NoOfItem2;

    printf("Weight - Item1: ");
    scanf("%lf", &item1);

    printf("No. of item1: ");
    scanf("%lf", &NoOfItem1);

    printf("Weight - Item2: ");
    scanf("%lf", &item2);

    printf("Weight - Item: ");
    scanf("%lf", &NoOfItem2);

    printf("Average Value = %lf", avg(item1, item2, NoOfItem1, NoOfItem2));

    return 0;
}
