// Spy Number

#include <stdio.h>

int main() {
    int n, temp, digit;
    int sum = 0, product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0) {
        digit = temp % 10;
        sum += digit;
        product *= digit;
        temp /= 10;
    }

    if(sum == product)
        printf("Spy Number");
    else
        printf("Not a Spy Number");

    return 0;
}