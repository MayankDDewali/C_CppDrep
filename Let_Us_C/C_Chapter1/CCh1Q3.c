/*If the marks obtained by a student in five different subjects are input through the keyboard, 
write a program to find out the aggregate marks and percentage marks obtained by the student. 
Assume that the maximum marks that can be obtained by a student in each subject is 100.*/
#include<stdio.h>
int main(){
	float h, e, m, s, sst, t, p;
	printf("Enter the marks of Hindi: ");
	scanf("%f",&h);
	printf("Enter the marks of English: ");
	scanf("%f",&e);
	printf("Enter the marks of Maths: ");
	scanf("%f",&m);
	printf("Enter the marks of Science: ");
	scanf("%f",&s);
	printf("Enter the marks of Social Studies: ");
	scanf("%f",&sst);
/*For the getting and printing the value of sum and percentage*/
	t = h+e+m+s+sst;
	p = t/5;
	printf("Aggregate Marks is %.2f\n",t);
	printf("Percentage marks is %.2f",p);
	return 0;
}
