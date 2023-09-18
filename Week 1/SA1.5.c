//WAP to swap two integer numbers using a third variable
#include<stdio.h>
int main(){
	int num1, num2, num3=0;
	printf("Enter the first integer -: ");
	scanf("%d",&num1);
	printf("Enter the second integer -: ");
	scanf("%d",&num2);
	printf("The numbers before swap are %d %d\n",num1,num2);
    num3 =num2;
	num2 =num1;
	num1 =num3;
	printf("The numbers after swap are %d %d",num1,num2);
	return 0;
}
