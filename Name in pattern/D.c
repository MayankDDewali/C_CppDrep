/*
                ***
                *  *
                *   *
                *  *
                ***
*/

#include<stdio.h>
int main()
{
    int n, i, j;
    n=5;
    for(i=1;i<=n;i++)
    {
        if(i==1 || i==n)
        {
            for(j=1;j<=n-2;j++)
            {
                printf("*");
            }
        }
        else{
            for(j=1;j<=n;j++)
            {
                if(i==2 && j==n-1 || i==n-1 && j==n-1){
                    printf("*");
                }
            }
        }
        printf("\n");
    }
    return 0;
}