/*If the lengths of three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is 
valid or not. The triangle is valid if the sum of two sides is greater than the largest of the three sides.*/
#include<stdio.h>
int main(){
	float a, b, c;
	printf("Enter the first side of triangle: ");
	scanf("%d",&a);
	printf("Enter the second side of triangle: ");
	scanf("%d",&b);
	printf("Enter the third side of triangle: ");
	scanf("%d",&c);
	if(a+b>c && a+c>b && b+c>a){
		printf("This triangle is valid.");
	}else{
		printf("This triangle is not valid.");
	}
}
