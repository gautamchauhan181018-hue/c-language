//write a program to print number of odd element in array.

#include <stdio.h>

int main(){

     int num[5];
     int odd;
    printf("enter the 5 element of array");

    for(int i=0; i<5;i++){
   
        scanf("%d",&num[i]);
    }

    for(int i = 0; i<5;i++){

        if(num[i]%2 != 0 ){
            odd++;
        }
    }
     printf("number of odd element: %d",odd);

    
     return 0;
}