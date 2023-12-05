/*
                *   *
                *  *
                * *
                *  *
                *   *
*/

#include<stdio.h>
int main()
{
    int n, i, j;
    n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i==1 && (j==1 || j==n)) || (i==5 && (j==1 || j==n))){
                printf("*");
            }
            else if((i==2 && (j==1 || j==n-1)) || (i==4 && (j==1 || j==n-1))){
                printf("*");
            }
            else if(i==3 && (j==1 || j==n-1-1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}