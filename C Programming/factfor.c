#include<stdio.h>
int main()
{
	int i,n;
	int fact=1;
	
	printf("enter valure\n");
	scanf("%d",&n);
	
	for(i=n;n>=1;i--)
	{
		fact=fact*i;
	}
	printf("fact is%d",fact);
	
}
