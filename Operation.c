#include <stdio.h>
int main()
{
	int num, a, b, sum, prod, div, sub;
	printf("Enter the first number for operation = ");
	scanf("%d",&a);
	printf("Enter the second number for operation = ");
	scanf("%d",&b);
	printf("Enter 1 to perform addition");
	printf("\nEnter 2 to perform subtraction");
	printf("\nEnter 3 to perform multiplication");
	printf("\nEnter 4 to perform division\n");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:
			sum = a+b;
			printf("The sum is = %d",sum);
			break;
		case 2:
			sub = a-b;
			printf("The difference is = %d",sub);
			break;
		case 3:
			prod = a*b;
			printf("The product is = %d",prod);
			break;
		case 4:
			div = a/b;
			printf("The quotient is = %d",div);
			break;
		default:
			printf("You have entered the wrong choice!");
	}
	
	return 0;
}
