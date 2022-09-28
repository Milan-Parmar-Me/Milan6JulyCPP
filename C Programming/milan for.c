#include<stdio.h>
int main()
{
	int i,n;
	int fact=1;
	
	printf("enter valure\n");
	scanf("%d",&n);
	
	for(i=1;n>=i;i++)
	{
		fact=fact*i;
	}
	printf("fact is%d",fact);
	return 0;
}
