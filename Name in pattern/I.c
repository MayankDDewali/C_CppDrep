/*
                  * 
                  * 
                  *
                  * 
                  * 
*/

#include <stdio.h>
int main()
{
    int n, i, j;
    n = 5;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j == 3)
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