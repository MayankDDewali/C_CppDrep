/*Write a C program: If ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the 
youngest of the three.*/
#include<stdio.h>
int main(){
	int a, b, c;
	printf("Enter the age of Ram: ");
	scanf("%d",&a);
	printf("Enter the age of Shyam: ");
	scanf("%d",&b);
	printf("Enter the age of Ajay: ");
	scanf("%d",&c);
	if(a<b && b<c){
		printf("Ram is youngest.");
	}else if(b<a && b<c){
		printf("Shyam is youngest.");
	}else if(c<a && c<b){
		printf("Ajay is youngest.");
	}else if(a==b && b==c){
		printf("All are of same age.");
	}else if(a==b && b>c){
		printf("Ajay is youngest.");
	}else if(b==c && c>a){
		printf("Ram is youngest.");
	}else if(c==a && c>b){
		printf("Shyam is youngest.");
	}else if(a==b && b<c){
		printf("Ram and Shyam are youngest.");
	}else if(b==c && c<a){
		printf("Shyam and Ajay are youngest.");
	}else{
		printf("Ram and Ajay is youngest.");
	}return 0;
}
