/* Pz14- C Program to Check Leap Year*/
#include<stdio.h>
int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0){
        printf("%d is a leap year.",year);
    }
    else if(year%400==0){
        printf("%d is a leap year.",year);
    }
    else{
        printf("%d is not a leap year.",year);
    }
    return 0;
}