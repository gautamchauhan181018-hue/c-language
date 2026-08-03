// Electricity Bill Program

#include<stdio.h>

int main()
{
    int units;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if(units <= 100)
        bill = units * 1.5;
    else if(units <= 200)
        bill = units * 2.5;
    else
        bill = units * 3.5;

    printf("Electricity Bill = %.2f", bill);

    return 0;
}