/*Write a C program for A five-digit number is entered through the keyboard. Write a program to obtain the reversed
 number and to determine whether the original and reversed numbers are equal or not.*/
#include<stdio.h>
int main(){
	int num, rnum, x, r;
	printf("Enter the five digit number: ");
	scanf("%d",&num);
/*Giving the value of number to another variable.*/
	x=num;
	rnum=0;
/*for dividing and saving the reminder to another variable*/
	while(x!=0){
		r=x%10;
		x=x/10;
		rnum=10*rnum+r;
	}if(num==rnum){
		printf("%d is equal to %d.",num,rnum);
	}else{
		printf("%d is not equal to %d.",num,rnum);
	}return 0;
}
