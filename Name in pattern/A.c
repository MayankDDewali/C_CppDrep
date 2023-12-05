/*
 *
 * *
 *   *
 *     *
 *       *
 */
#include <stdio.h>
int main()
{
    int row, i, j, k;
    row = 5;
    for (i = 1; i <= row; i++)
    {
        for (j = i; j < row; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= (i * 2 - 1); k++)
        {
            if (k == 1 || k == (2 * i - 1))
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
    return 0;
}
