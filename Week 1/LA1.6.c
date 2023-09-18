//WAP to convert a quantity in meter entered through keyboard into its equivalent kilometer and meter.
#include<stdio.h>
int main (){
	int meter, meter2, kilometer;
	printf("Enter the quantity in meter -: ");
	scanf("%d",&meter);
	kilometer = meter/1000;
	meter2=meter%1000;
	printf("The %d of meter is converted into = %d kilometer and %d meter", meter,kilometer,meter2);
	return 0;
}
