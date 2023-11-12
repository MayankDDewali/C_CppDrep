/*Write a program to print all the ASCII values and their equivalent characters using a while loop. The ASCII values 
vary from 0 to 255.*/
#include<stdio.h>
int main(){
	int i;
	printf("ASCII values from 0 to 255 are...\n");
	for(i=0;i<=255;i++){
		printf("ASCII value of %d is %c\n",i,i);
	}return 0;
}
