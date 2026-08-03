//2 - create a program to use format specifier.

#include<stdio.h>

int main(){

    int a;
    
    float c;

    printf("enter the roll:");
    scanf(" %d",&a);

    
    printf("enter the decimal :");
    scanf(" %f",&c);

    printf("\nYour Information:\n");
    printf("Roll = %d\n", a);
    printf("Decimal = %.2f\n", c);




    return 0;
}