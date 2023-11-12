/*Write a C program: Given the length and breadth of a rectangle, write a program to find whether the area of the 
rectangle is greater than its perimeter. For example, the area of the rectangle with length = 5 and breadth = 4 is 
greater than its perimeter*/
#include<stdio.h>
int main(){
	float l, b, ar, per;
	printf("Enter the length of the rectangle: ");
	scanf("%f",&l);
	printf("Enter the breadth of the rectangle: ");
	scanf("%f",&b);
	ar = l*b;
	per = 2*(l+b);
	if(ar>per){
		printf("Area of rectangle is greater than its perimeter.");
	}else if(ar==per){
		printf("Area of rectangle is equal to its perimeter.");
	}else{
		printf("Area of rectangle is smaller than its perimeter.");
	}
}
