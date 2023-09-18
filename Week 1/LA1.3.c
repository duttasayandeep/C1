//WAP to calculate perimeter of a circle.
#include<stdio.h>
int main(){
	float perimeter, radius;
	printf("Enter the radius of the circle -: ");
	scanf("%f",&radius);
	perimeter = 2*3.14*radius;
	printf("The perimeter of the circle is -: %f ",perimeter);
	return 0;
}
