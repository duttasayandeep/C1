//WAP to calculate area of a triangle whose three sides are given.
#include<stdio.h>
#include<math.h>
int main(){
	float area, s, a, b, c, area2;
	printf("Enter the three sides of the triangle -:\n");
	scanf("%f %f %f", &a,&b,&c);
	s=(a+b+c)/2.0;
	area = s*((s-a)*(s-b)*(s-c));
	area2=sqrt(area);
	printf("The area of the triangle is -: %f ",area2);
	return 0;
}
