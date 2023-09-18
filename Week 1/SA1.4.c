//WAP to calculate the area of a triangle whose base and height is given
#include<stdio.h>
int main(){
	float area, base, height;
	printf("Enter the base and height of the triangle -:");
	scanf("%f %f", &base,&height);
	area = 0.5*base*height;
	printf("The area of the triangle is -: %f ",area);
	return 0;
}
