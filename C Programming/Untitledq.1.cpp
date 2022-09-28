#include<stdio.h>
int main()
{
	int days,month,year;
	printf("enter the number of days\n");
	scanf("%d",&days);
	
	year=days/365;
	month=days/30;
	printf("your year is %d",year);
	printf("your month is %d",month);
}
