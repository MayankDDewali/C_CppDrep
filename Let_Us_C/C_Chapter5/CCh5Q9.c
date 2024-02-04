/*Write a program to enter numbers till the user wants. At the end it should display the count of positive, negative 
and zeros entered.*/
#include<stdio.h>
#include<stdbool.h>
int main()
{
    char choice;
    int pcount=0, ncount=0, zcount=0;
    float num;
    do
	{
		printf("Enter the number: ");
		scanf("%f",&num);
        if(num>0)
        {
            pcount+=1;
        }
        else if(num<0)
        {
            ncount+=1;
        }
        else
        {
            zcount+=1;
        }
	}
	while(choice==1);
    	printf("Do you want to enter another number?(y/n): ");
        scanf(" %c",&choice);
    switch(choice)
    {
        case 'y':
            printf("Enter a number: ");
            scanf("%f", &num);
            if(num>0)
            {
                pcount+=1;
            }
            else if(num<0)
            {
                ncount+=1;
            }
            else
            {
                zcount+=1;
            }
        case 'n':
            printf("Number of positive numbers entered are %d\n",pcount);
            printf("Number of negative numbers entered are %d\n",ncount);
            printf("Number of 0s entered are %d\n",zcount);
            break;
        default:
            printf("Invalid input!!!");
            break;
    }return 0;
}
