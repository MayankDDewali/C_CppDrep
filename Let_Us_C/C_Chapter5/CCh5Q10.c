/*Write a program to receive an integer and find its octal equivalent. (Hint: To obtain octal equivalent of an integer, 
divide it continuously by 8 till dividend doesn't become zero, then write the remainders obtained in reverse 
direction.)*/
#include<stdio.h>
int main()
{
	int num, x, y, r, oct, r2, rev;
	printf("Enter the number: ");
	scanf("%d",&num);
	x=num;
	oct=0;
	while(x!=0)
	{
		r=x%8;
		x=x/8;
		oct=10*oct+r;
	}1
	rev=0;
	while(oct!=0){
		r2=oct%10;
		oct=oct/10;
		rev=10*rev+r2;
	}printf("Octal number of %d is %d.",num,rev);
}
