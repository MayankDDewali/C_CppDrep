/* Pz17- C Program to Calculate the Sum of Natural Numbers*/

#include <stdio.h>
int main()
{
    int num, sum;
    sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Summition of natural number till %d is ", num);
    while (num != 0)
    {
        sum += num;
        num -= 1;
    }
    printf("%d.", sum);
    return 0;
}