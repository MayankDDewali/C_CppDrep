/* Pz19- C Program to Generate Multiplication Table*/

#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter the number: ");
    scanf("%d",&num);
    
    printf("Multiplication of %d is...\n");

    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }
    return 0;
}