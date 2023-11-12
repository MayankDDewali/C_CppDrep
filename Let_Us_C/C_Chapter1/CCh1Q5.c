/*The length and breadth of a rectangle and radius of a circle are input through the keyboard. Write 
a program to calculate the area and perimeter of the rectangle, and the area and circumference of 
the circle.*/
#include<stdio.h>
int main(){
	float a, b, r, p1, p2, a1, a2;
	printf("Enter the length of rectangle: ");
	scanf("%f", &a);
	printf("Enter the breadth of rectangle: ");
	scanf("%f", &b);
	printf("Enter the radius of circle: ");
	scanf("%f", &r);
/*Giving and printing the value of perimeter and circumference and areas of both shape...*/
	p1 = 2*(a+b);
	a1 = a*a + b*b;
	p2 = 2*(22/7)*r;
	a2 = (22/7)*r*r;
	printf("Perimeter of rectangle is %.2f\n",p1);
	printf("Area of rectangle is %.2f\n\n",a1);
	printf("Circumference of the circle is %.2f\n",p2);
	printf("Area of circle is %.2f",a2);
}
