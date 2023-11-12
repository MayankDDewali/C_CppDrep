/*Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs. 120.00 per hour for 
every hour worked abouve 40 hours. Assume that employees do not work for fractional part of an hour.*/
#include<stdio.h>
int main(){
	int i;
	float hour, otpay;
	for(i=1;i<=10;i++){
		printf("Enter number of hour you worked: ");
		scanf("%f",&hour);
		if(hour>40){
			otpay=(hour-40)*120;
		}else{
			otpay=0;
		}
		printf("otpay is %f\n",otpay);
	}return 0;
}
