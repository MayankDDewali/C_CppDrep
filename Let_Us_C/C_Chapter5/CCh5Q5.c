/*Write a program to print out all Armstrong numbers between 1 and 500. If sum of cubes of each digit of the number is equal to the 
number itself, then the number is called an Armstrong number. For example, 153=(1*1*1)+(5*5*5)+(3*3*3).*/
#include<stdio.h>
int main(){
	int i,r,x,sum;
	printf("Armstrong numbers between 1 to 500 are...");
	for(i=1;i<=500;i++){
		sum=0;
		x = i;
/*Giving the condition for armstrong number.*/
		while(x!=0){
			r = x%10;
			sum = sum+(r*r*r);
			x = x/10;
		}if(sum==i){
			printf("\n%d is an armstrong number.",i);
		}
	}return 0;
}
