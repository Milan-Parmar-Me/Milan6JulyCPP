#include<stdio.h>
int main()
{
	int i,oco=0,eco=0;
	
	
	for(i=1;i<=10;i++)
	{
		printf("enter the valur\n");
	scanf("%d\n ",&i);
	if(i%2==0)
	{
		eco=eco+i;
	}
	else
	{
		oco=oco+i;
	}
	}
	printf("oco%d",oco);
	printf("eco%d",eco);
}
