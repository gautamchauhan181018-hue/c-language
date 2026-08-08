//count the repition of target element of array.

#include <stdio.h>

int main(){

    int num[5];
    int target;
    int count=0;

    printf("enter the 5 element of array type and repeat the element");

    for(int i = 0;i<5;i++){

        scanf("%d",&num[5]);
    }

    printf("enter the target element:");
    scanf("%d",&target);

    for(int i =0;i<5;i++){

        if(num[i]==target){
            count++;
        }

    }

    printf("number of reprition of target element are= %d",count);


}