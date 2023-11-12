/*Write a C program to check whether a triangle is valid or not, If three angles of the triangle are entered through 
the keyboard. A triangle is valid if the sum of all the three angles is equal to 180 degrees.*/
#include<stdio.h>
int main(){
	float a, b, c, sum;
	printf("Enter the first angle of the triangle: ");
	scanf("%f",&a);
	printf("Enter the second angle of the triangle: ");
	scanf("%f",&b);
	printf("Enter the third angle of the triangle: ");
	scanf("%f",&c);
	sum = a + b + c;
	if(sum==180){
		printf("Triangle is valid.");
	}else{
		printf("Triangle is not valid.");
	}
}
