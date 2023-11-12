/*A certain grade of steel is graded according to the following conditions:
(1) Hardness must be greater than 50.
(2) Carbon content must be less than 0.7.
(3) Tensile strength must be greater than 5600.
The grades are as follows:
Grade is 10 if all three conditions are met.
Grade is 9 if conditions (1) and (2) are met.
Grade is 8 if conditions (2) and (3) are met.
Grade is 7 if conditions (1) and (3) are met.
Grade is 6 if only one condition is met.
Grade is 5 if none of the conditions are met.
Write a C program, which will require the user to give values of hardness, carbon content and tensile strength of the 
steel under consideration and steel under consideration and output the grade of the steel.*/
#include<stdio.h>
int main()
{
	float h, c, t;
	printf("Enter the value of hardness: ");
	scanf("%f",&h);
	printf("Enter the value of carbon content: ");
	scanf("%f",&c);
	printf("Enter the value of tensile strength: ");
	scanf("%f",&t);
	if(h>50 && c<0.7 && t>5600){
		printf("Garde is 10.");
	}else if(h>50 && c<0.7){
		printf("Grade is 9.");
	}else if(c<0.7 && t>5600){
		printf("Grade is 8.");
	}else if(h>50 && t>5600){
		printf("Grade is 7.");
	}else if(h>50 || c<0.7 || t>5600){
		printf("Grade is 6.");
	}else{
		printf("Grade is 5.");
	}return 0;
}
