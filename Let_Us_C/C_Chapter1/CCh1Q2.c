/*The distance between two cities (in kilometers) is input through the keyboard. Write a program to 
convert and print this distance in meters, feet, inches and centimeters.*/
#include<stdio.h>
int main(){
	float km, m, f, i, cm;
	printf("Enter the distance between two cities in Kilometers: ");
	scanf("%f",&km);
/*For conveting the values...*/</h4>
	m = km*1000;
	cm = m*100;
	i = cm/2.54;
	f = i/12;
/*For printing the values...*/
	printf("Distance in meters %.2f\n",m);
	printf("Distance in feets %.2f\n",f);
	printf("Distance in inches %.2f\n",i);
	printf("Distance in centimeters %.2f\n",cm);
	return 0;
}
