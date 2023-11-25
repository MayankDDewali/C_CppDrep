/* Pz9- C Program to Swap Two Numbers*/

#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);
    printf("\n\nBefore swapping the numbers...");
    printf("\na = %.4f", a);
    printf("\nb = %.4f", b);
    printf("\n\nAfter swapping the numbers...");
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\na = %.4f", a);
    printf("\nb = %.4f", b);
}