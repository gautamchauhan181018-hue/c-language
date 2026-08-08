//find the smallest  number in array.

#include <stdio.h>

int main(){

    int num[5];

    printf("enter the 5 element of array:");

    for(int i = 0;i<5;i++){

        scanf("%d",&num[i]);

    }

    int smallest = num[0];

    for(int i=0;i<5;i++){

        if(num[i]<smallest){
            smallest = num[i];
        }
    }

    printf("smallest = %d",smallest);

    return 0;
}