/*Write a C program that accepts an employee's ID, total worked hours of a month and the amount he
received per hour. Print the employee's ID and salary (with two decimal places) of a particular month.
Test Data :
Input the Employees ID(Max. 10 chars): 0342
Input the working hrs: 8
Salary amount/hr: 15000
Expected Output:
Employees ID = 0342
Salary = U$ 120000.00
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    char id[10];
    double hours, salary;

    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", &id);

    printf("Input the working hrs: ");
    scanf("%lf", &hours);

    printf("Salary amount/hr: ");
    scanf("%lf", &salary);

    double totalSalary = salary * hours;

    printf("Employees ID = %s\n",id);
    printf("Salary = U$ %.2lf\n", totalSalary);



    return 0;
}
