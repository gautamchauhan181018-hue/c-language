// use of else if 

#include <stdio.h>

int main()
{
    int marks;
    printf("enter marks:");
    scanf("%d",&marks);

    if(marks >= 90)
    {
        printf("Grade A");
    }
    else if(marks >= 80)
    {
        printf("Grade B");
    }
    else if(marks >= 70)
    {
        printf("Grade C");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}