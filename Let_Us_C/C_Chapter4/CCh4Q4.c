/*If the lengths of three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is an 
isosceles, an equilateral, a scalene or a right-angled triangle.*/
#include<stdio.h>
int main(){
	float a, b, c;
	printf("Enter the first side of triangle: ");
	scanf("%f",&a);
	printf("Enter the second side of triangle: ");
	scanf("%f",&b);
	printf("Enter the third side of triangle: ");
	scanf("%f",&c);
	if(a+b>c && a+c>b && b+c>a){
		if(a==b && b==c && c==a){
			printf("This is an equilateral triangle.");
		}else if(a==b && b!=c){
			printf("This is an isosceles triangle.");
		}else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
			printf("This is a right-angled triangle.");
		}else{
			printf("This is a scalene triangle.");
		}
	}else{
		printf("This triangle is not valid.");
	}
}
