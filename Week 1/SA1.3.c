//WAP to calculate area of a circle
#include<stdio.h>
int main(){
	float area, radius;
	printf("Enter the radius of the circle -: ");
	scanf("%f",&radius);
	area = 3.14*radius*radius;
	printf("The area of the circle is -: %f ",area);
	return 0;
}
