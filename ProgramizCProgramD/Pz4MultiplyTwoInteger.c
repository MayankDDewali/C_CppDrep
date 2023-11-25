/* Pz4- C Program to Multiply Two Floating-Point Numbers*/
#include <stdio.h>
int main()
{
    float n1, n2;
    printf("Enter the first number: ");
    scanf("%f", &n1);
    printf("Enter the second number: ");
    scanf("%f", &n2);
    printf("Multiplication of %.4f and %.4f is %.4f.", n1, n2, n1 * n2);
    return 0;
}