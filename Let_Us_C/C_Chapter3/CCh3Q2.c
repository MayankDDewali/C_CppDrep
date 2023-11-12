/*Any integer is input through the keyboard. Write a program to find out whether it is an odd number or even number.*/
#include<stdio.h>
int main(){
	int a;
	printf("Enter the number: ");
	scanf("%d",&a);
/*Giving conditions for getting even and odd number.*/
	if(a%2==0){
		printf("%d is an even number.",a);
	}else{
		printf("%d is an odd number.",a);
	}return 0;
}
