//check the number of elements are even in array.

#include <stdio.h>

int main(){

     int num[5];
    printf("enter the 5 element of array:");

    for(int i=0; i<5; i++){

         scanf("%d",&num[i]);
    }

     int even = 0;
    for(int i = 0; i<5;i++){

        if(num[i]%2 == 0 ){
            even++;
        }
    }

    printf("number of even element = %d", even);
}