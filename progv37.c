//fint the largest number;

#include<stdio.h>

int main(){

    int num[5];

    printf("enter the 5 element of array: ");

    for(int i = 0;i<5;i++){

        scanf("%d",&num[i]);
    }

    int largest = num[0];

    for(int i=0;i<5;i++){
    
        if(arr[i]>largest){
            largest = num[i];
        }
    }

    printf("largest number = %d", largest);

    return 0;

}