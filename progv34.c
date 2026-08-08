//write a program of simple array.

#include <stdio.h>

int main(){


     int num[5];


     for(int i=0;i<5;i++){

    printf("enter the element of array:");
    scanf("%d",&num[i]);

     }

   for(int i = 0;i<5;i++){

    printf("your array elements are: %d ",num[i]);

   }

}
