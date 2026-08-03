//Area of Rectangle

#include <stdio.h>

int main()
{
    int length, width, area;

    printf("Enter Length: ");
    scanf("%d", &length);

    printf("Enter Width: ");
    scanf("%d", &width);

    area = length * width;

    printf("Area = %d", area);

    return 0;
}