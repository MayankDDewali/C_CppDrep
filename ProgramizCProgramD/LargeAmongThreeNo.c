/*C Program to Find the Largest Number Among Three Numbers*/
#include<stdio.h>
int main(){
    float a, b, c;
    printf("Enter the first number: ");
    scanf("%f",&a);
    printf("Enter the second number: ");
    scanf("%f",&b);
    printf("Enter the third number: ");
    scanf("%f",&c);
    if(a==b && b==c){
        printf("All numbers are same.");
    }
    else if(a>=b && b>=c){
        printf("%.4f is the largest number.",a);
    }
    else if(b>=c && b>=a){
        printf("%.4f is the largest number.",b);
    }
    else{
        printf("%.4f is the largest number.",c);
    }
}