// if and else use

#include <stdio.h>

int main()
{
    int age;

    printf("Enter Age: ");
    scanf("%d",&age);

    if(age >= 18)
    {
        printf("Adult");
    }
    else
    {
        printf("Minor");
    }

    return 0;
}