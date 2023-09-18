//WAP swap the contents of two variables by using a single statement for swap in C.
#include<stdio.h>
int main(){
	int num1, num2;
	printf("Enter the first integer -: ");
	scanf("%d",&num1);
	printf("Enter the second integer -: ");
	scanf("%d",&num2);
	printf("Before swapping : num1=%d, num2=%d\n",num1,num2);
    (num1 ^= num2), (num2 ^= num1), (num1 ^= num2);
	printf("After swapping :  num1=%d, num2=%d",num1,num2);
	return 0;
}
