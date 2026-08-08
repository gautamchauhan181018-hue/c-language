//print found and not found using flag variable

#include <stdio.h>

int main(){

     int num[5];
     int target;
     int found = 0;

     pritnf("enter the 5 element of array:");

     for(int i=0;i<5;i++){
        scanf("%d",&num[5]);
     }

     printf("enter the target element:");
     scanf("%d",&target);

     for(int i =0;i<5;i++){
        if(num[i]==target){
            found = 1;
            break;
        }
     }

     if(found ==0){
        printf("element is not found");
     }
     else{
        printf("element is found");
     }

     return 0;
}