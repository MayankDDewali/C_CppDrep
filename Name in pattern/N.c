/*
                *   *
                **  *
                * * *
                *  **
                *   *
*/

#include <stdio.h>
int main()
{
    int n, i, j;
    n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j == 1 || j == n)
            {
                printf("*");
            }
            else if (i == j)
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