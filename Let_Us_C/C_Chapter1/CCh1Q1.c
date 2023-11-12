/*Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, 
and house rent allowance is 20% of basic salary. Write a program to calculate his gross sallary.*/
#include<stdio.h>
int main(){
	float bs, da, hra, gs;
	printf("Enter the basic salary of Ramesh: ");
	scanf("%f",&bs);
/*For giving and printing the values...*/
	da = 0.4*bs;
	printf("Dearness allowance of Ramesh is %.2f\n",da);
	hra = 0.2*bs;
	printf("House rent allowance of Ramesh is %.2f\n",hra);
	gs = bs + da + hra;
	printf("Gross sallary of Ramesh is %.2f",gs);
	return 0;
}
