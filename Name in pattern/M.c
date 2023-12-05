/*
                *    *
                **  **
                * ** *
                *    *
                *    *
*/

#include<stdio.h>
int main()
{
    int n, i, j;
    n = 5;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j == 1 || j == n)
            {
                printf("*");
            }
            else if (i == 2 && (j == 2 || j == n - 1))
            {
                printf("*");
            }
            else if (i == 3 && (j == 3 || j == n - 2))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}