/*If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits.*/
#include<stdio.h>
int main(){
	int n, a, b, c, d, e, x, sum;
	printf("Enter the five digit number: ");
	scanf("%d", &n);
	x=n;
	a = n%10;			//5th digit
	n = n/10;			//remaining digits
	b = n%10;			//4th digit
	n = n/10;			//remaining digits
	c = n%10;			//3th digit
	n = n/10;			//remaining digits
	d = n%10;			//2th digit
	n = n/10;			//remaining digits
	e = n%10;			//1th digit
	sum = a+b+c+d+e;
	printf("Sum of digits of %d is %d",x,sum);
	return 0;
}
