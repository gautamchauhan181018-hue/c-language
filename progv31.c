//Armstrong Number (3 digits)

#include<stdio.h>

int main()
{
    int num, temp, rem;
    int sum = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    temp = num;

    while(num != 0)
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }

    if(temp == sum)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}