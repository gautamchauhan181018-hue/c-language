#include<stdio.h>

int main(){

    int num[5];
    float avg;
    int sum =0;

    printf("enter the 5 element of array:");
    for(int i=0;i<5;i++){

        scanf("%d"&num[i]);
        sum = sum + num[i];

    }

    avg = sum/5;

    printf("average  = %.2f ",avg);

   return 0;
}