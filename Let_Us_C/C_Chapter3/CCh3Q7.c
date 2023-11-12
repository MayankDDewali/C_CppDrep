/*Write a C program to find the absolute value of a number entered through the keyboard.*/
#include<stdio.h>
int main(){
	float num;
	printf("Enter the number: ");
	scanf("%f",&num);
	if(num>0){
		printf("Absolute value of %.2f is %.2f",num,num);
	}else{
		printf("Absolute value of %.2f is %.2f",num,-num);
	}return 0;
}
