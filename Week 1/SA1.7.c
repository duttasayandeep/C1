#include <stdio.h>
int main()
{
	int seconds,rs,rs1,h,m,sec;
	printf("Enter the time in seconds -:");
	scanf("%d",&seconds);
	h=seconds/3600;
	rs=seconds%3600;
	rs1=rs%60;
	m=rs/60;
	printf("%d seconds= %d Hour , %d Minute and %d Second",seconds,h,m,rs1);
	return 0;
}
