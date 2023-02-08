#include<stdio.h>
#include<stdlib.h>

int main(){

    int value[5], i, sum=0;

    for(i=0; i<5; i++){
        printf("Enter %d'th number: ", i+1);
        scanf("%d", &value[i]);
    }

    for(i=0; i<5; i++){
        if(value[i]%2==1){
            sum += value[i];
        }
    }

    printf("\nSum of all odd = %d\n", sum);

    return 0;
}
