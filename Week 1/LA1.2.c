//WAP to convert temperature from centigrade to Fahrenheit scale.
#include<stdio.h>
int main(){
	float t_cent, t_farh;
	printf("Enter the temperature in centigrade -: ");
	scanf("%f", &t_cent);
	t_farh = ((9*t_cent)+160)/5;
	printf("The %f centigrade in fahrenheit is -: %f ",t_cent,t_farh);
	return 0;
	
}
