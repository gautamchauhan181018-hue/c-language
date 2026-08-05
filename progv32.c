Automorphic Number

#include <stdio.h>

int main() {
    int n, square, temp, digits = 0;
    int divisor = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    square = n * n;
    temp = n;

    while(temp > 0) {
        digits++;
        temp /= 10;
    }

    for(int i = 0; i < digits; i++) {
        divisor *= 10;
    }

    if(square % divisor == n)
        printf("Automorphic Number");
    else
        printf("Not an Automorphic Number");

    return 0;
}