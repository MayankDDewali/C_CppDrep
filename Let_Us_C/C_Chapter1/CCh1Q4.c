/*Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to 
convert this temperature into Centigrade degrees.*/
#include<stdio.h>
int main(){
	float fah, cen;
	printf("Enter the Fahrenheit temprature of city: ");
	scanf("%f",&fah);
/*For converting and printing Centigrade to Fahrenheit*/
	cen = (fah-32)*5/9;
	printf("After converting %.2f Fahrenheit to Centigrade is %.2f",fah,cen);
}
