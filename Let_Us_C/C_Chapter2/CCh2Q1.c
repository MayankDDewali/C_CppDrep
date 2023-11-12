/*If lengths of three sides of a triangle are input through the keyboard, write a program to find 
the area of the triangle.*/
#include<stdio.h>
#include<math.h>			/*for sqrt()*/
int main(){
	float a, b, c, sp, ar;
	printf("Enter the first side of triangle: ");
	scanf("%f", &a);
	printf("Enter the second side of triangle: ");
	scanf("%f", &b);
	printf("Enter the third side of triangle: ");
	scanf("%f", &c);
/*Giving the value of semi perimeter and area of triangle.*/
	sp = (a+b+c)/2;
	ar = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
	printf("Area of triangle = %.2f",ar);
	return 0;
}
