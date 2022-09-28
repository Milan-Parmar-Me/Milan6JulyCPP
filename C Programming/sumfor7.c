#include<stdio.h>
int main()
{
	int num,i,oco=0,eco=0;
	
	
	for(i=1;i<=10;i++)
	{
		printf("enter the value\n");
	     scanf("%d\n",&num);
	if(num%2==0)
	{
		eco=eco+i;
	}
	else
	{
		oco=oco+i;
	}
	}
	printf("oco%d\n",oco);
	printf("eco%d\n",eco);
}
