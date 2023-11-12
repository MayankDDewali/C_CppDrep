/*Consider a currency system in which there are notes of six denominations, namely, Rs. 1, Rs. 2, 
Rs. 5, Rs. 10, Rs. 50, Rs. 100. If a sum of Rs. N is entered through the keyboard, write a program 
to compute the smallest number of notes that will combine to give Rs. N.*/
#include<stdio.h>
int main(){
	int n, hun=0, fif=0, ten=0, fiv=0, two=0, one=0, total;
	printf("Enter the ammount: ");
	scanf("%d", &n);
/*Giving the condition for rupees more than 100*/
	if(n>=100){
		hun = n/100;
		n = n%100;
	}
/*Giving the condition for rupees more than 50*/
	if(n>=50){
		fif = n/50;
		n = n%50;
	}
/*Giving the condition for rupees more than 10*/
	if(n>=10){
		ten = n/10;
		n = n%10;
	}
/*Giving the condition for rupees more than 5*/
	if(n>=5){
		fiv = n/5;
		n = n%5;
	}
/*Giving the condition for rupees more than 2*/
	if(n>=2){
		two = n/2;
		n = n%2;
	}
/*Giving the condition for rupees more than 1*/
	if(n>=1){
		one=n;
	}
/*Giving the value of total*/
	total = hun+fif+ten+fiv+two+one;
/*Now printing all values...*/
	printf("Smallest number of notes = %d\n",total);
	printf("Number of notes of HUNDRED = %d\n",hun);
	printf("Number of notes of FIFTY = %d\n",fif);
	printf("Number of notes of TEN = %d\n",ten);
	printf("Number of notes of FIVE = %d\n",fiv);
	printf("Number of notes of TWO = %d\n",two);
	printf("Number of notes of ONE = %d",one);
	return 0;
}
