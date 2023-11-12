/*Write a program to print out all Armstrong numbers between 1 and 500. If sum of cubes of each digit of the number is 
equal to the number itself, then the number is called an Armstrong number. For example, 153=(1*1*1)+(5*5*5)+(3*3*3).*/
#include<stdio.h>
int main(){
	int num, arm, x, r;
	printf("Enter the number: ");
	scanf("%d",&num);
	x=num;
	arm=0;
	while(x!=0){
		r=x%10;
		x=x/10;
		arm+=r*r*r;
	}if(num==arm){
		printf("%d is an armstrong number.",num);
	}else{
		printf("%d is not an armstrong number.",num);
	}return 0;
}
