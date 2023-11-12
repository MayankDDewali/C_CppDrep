/*IF cost price and selling price of an item are input through the keyboard, write a program to determine whether the
 seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred*/
#include<stdio.h>
int main(){
	float cp,sp,x;
	printf("Enter the cost price of the item: ");
	scanf("%f",&cp);
	printf("Enter the selling price of the itme: ");
	scanf("%f",&sp);
/*Giving the value of x*/
	x=sp-cp;
/*Making the condition for profit and loss...*/
	if(x<=0){
		printf("Loss of %.2f.",x);
	}else if(x==0){
		printf("Neither loss nor profit.");
	}else{
		printf("Profit of %.2f.",x);
	}return 0;
}
