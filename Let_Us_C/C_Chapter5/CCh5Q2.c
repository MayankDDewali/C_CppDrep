/*Write a program to find the factorial value of any number entered through the keyboard.*/
#include<stdio.h>
int main(){
	int num, i, fact;
	printf("Enter the number: ");
	scanf("%d",&num);
	fact = i = 1;
	while(i<=num){
		fact = fact*i;
		i++;
	}printf("Factorial value of %d = %d",num,fact);
}
