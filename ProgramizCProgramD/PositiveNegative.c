/*C Program to Check Whether a Number is Positive or Negative*/
#include<stdio.h>
int main(){
    float num;
    printf("Enter the number: ");
    scanf("%f",&num);
    if(num==0){
        printf("The number is 0.");
    }
    else if(num>0){
        printf("%.2f is a positive number.",num);
    }
    else{
        printf("%.2f is a negative number.",num);
    }
    return 0;
}