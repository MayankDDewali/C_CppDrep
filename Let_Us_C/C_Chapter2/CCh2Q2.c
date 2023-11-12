/*If a five-digit number is input through the keyboard, write a program to reverse the number.*/
#include<stdio.h>
int main(){
	int n, a, b, c, d, e, m;
	printf("Enter the five digit number: ");
	scanf("%d", &n);
	printf("Five digit number is %d\n",n);
	a = n%10;			//5th digit
	n = n/10;			//remaining digits
	b = n%10;			//4th digit
	n = n/10;			//remaining digits
	c = n%10;			//3th digit
	n = n/10;			//remaining digits
	d = n%10;			//2th digit
	n = n/10;			//remaining digits
	e = n%10;			//1th digit
	m = a*10000+b*1000+c*100+d*10+e;
	printf("After reversing the number %d",m);
}
