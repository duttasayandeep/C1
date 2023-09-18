//WAP to convert given paise into its equivalent rupee and paise
#include<stdio.h>
int main (){
	int paise, rupee, paise2;
	printf("Enter the amount of paise to be converted -: ");
	scanf("%d",&paise);
	rupee = paise/100;
	paise2=paise%100;
	printf("The %d of paise is converted into = %d rupee and %d paise", paise,rupee,paise2);
	return 0;
}
