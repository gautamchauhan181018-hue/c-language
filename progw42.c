//write a c program to find the position of target element??

#include <stdio.h>

int main(){

    int num[5]={10,20,30,40,50};
    int target;

    for(int i=0;i<5;i++){

        if(num[i]==target){

            printf("element found at index: ",i);
        }
    }
    
    return 0;
}

