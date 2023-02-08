/*
Write a C program that accepts 4 integers p, q, r, s from the user where q, r and s are positive
and p is even. If q is greater than r and s is greater than p and if the sum of r and s is greater
than the sum of p and q print "Correct values", otherwise print "Wrong values".
Test Data :
Input the second integer: 35
Input the third integer: 15
Input the fourth integer: 46
Expected Output:
Wrong values
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    int p, q, r, s;

    printf("Input the first integer: ");
    scanf("%d", &p);

    printf("Input the second integer: ");
    scanf("%d", &q);

    printf("Input the third integer: ");
    scanf("%d", &r);

    printf("Input the fourth integer: ");
    scanf("%d", &s);

    if(p % 2 == 0){
        if(q > r){
            if(s > p){
                if(r + s > p + q){
                    printf("Correct values");
                }
                else{
                    printf("Wrong values");
                }
            }
            else{
                printf("Wrong values");
            }
        }
        else{
            printf("Wrong values");
        }
    }
    else{
        printf("Wrong values");
    }

    /*
    if((q > r) && (s > p) && ((r+s) > (p+q)) && (r > 0) && (s > 0) && (p%2 == 0))
	 {
		printf("\nCorrect values\n");
	}
	else {
		printf("\nWrong values\n");
	}
    */

    return 0;
}
