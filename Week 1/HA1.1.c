//WAP to find the average mark of 5 subjects of a student and find the percentage.
#include<stdio.h>
int main(){
	float sub1, sub2, sub3, sub4, sub5, avg, percentage;
	printf("Enter the marks of the five subjects out of 100\n");
	scanf("%f %f %f %f %f",&sub1,&sub2,&sub3,&sub4,&sub5);
	avg=(sub1+sub2+sub3+sub4+sub5)/5;
	printf("The average marks obtained by the student is = %f ",avg);
	percentage=(avg/100)*100;
	printf("The percentage of marks is = %f",percentage);
	return 0;
}
