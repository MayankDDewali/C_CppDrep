/*
                *****
                *
                *****
                *
                *****
*/

#include <stdio.h>
int main()
{
    int n, i, j;
    n = 5;
    for (i = 1; i <= 5; i++)
    {
        if (i == 1 || i == 3 || i == n)
        {
            for (j = 1; j <= 5; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (j = 1; j <= 5; j++)
            {
                if (j == 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}