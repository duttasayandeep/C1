#include <stdio.h>
int main()
{
	int a, b, sum;
	printf("Enter two integers\n");
	scanf("%d %d", &a,&b);
	sum = a+b;
	printf("The Sum of the integer %d and %d is = %d ", a,b,sum);
	
	return 0;
}
