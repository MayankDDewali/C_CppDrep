/*Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of 
another.*/
#include<stdio.h>
int main(){
	float x, power;
	int y, i;
	printf("Enter the number: ");
	scanf("%f",&x);
	printf("Enter the power of that number: ");
	scanf("%d",&y);
	power = i = 1;
	while(i<=y){
		power = power * x;
		i++;
	}printf("%.2f to the power %d is %.2f",x,y,power);
	return 0;
}
