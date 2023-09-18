//WAP to subtract a number from another number and display the result.
#include <stdio.h>
int main()
{
	float a, b, diff;
	printf("Enter two numbers\n");
	scanf("%f %f", &a,&b);
	diff = a-b;
	printf("The difference of the numbers %f and %f is = %f ", a,b,diff);
	
	return 0;
}
