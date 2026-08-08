//user input linear 

#include <stdio.h>

int main(){

    int num[5];
    int target;

    printf("enter the 5 element of array:");

    for(int i = 0; i<5;i++){
        scanf("%d",&num[i]);
    }

    printf("enter the  target element:  ");
    scanf("%d",&target);

    for(int i =0;i<5;i++){

        if(num[i] == target){

            printf("element found:");
            break;
        }
    }

    return 0;

}