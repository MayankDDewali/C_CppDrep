/* Pz3- C Program to Add Two Integers*/
#include <stdio.h>
int main()
{
    float n1, n2;
    printf("Enter the first integer: ");
    scanf("%f", &n1);
    printf("Enter the second integer: ");
    scanf("%f", &n2);
    printf("Sum of %.4f and %.4f is %.4f.", n1, n2, n1 + n2);
    return 0;
}