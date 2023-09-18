//WAP to find centigrade for a given fahrenheit temperature
#include<stdio.h>
int main(){
	float t_cent, t_farh;
	printf("Enter the temperature in fahrenheit -: ");
	scanf("%f", &t_farh);
	t_cent = ((t_farh - 32)*5)/9.0;
	printf("The temperature in centigrade is -: %f ",t_cent);
	return 0;
	
}
