#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of num\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{
	if(a>c)
	{
		printf("%d",a);
	}
	else
	{
		printf("%d",c);
	}
	}
	else if(b>c)
	{
		if(b>a)
		{
			printf("%d",b);
		}
		else
		{
			printf("%d",c);
		}
	}
	else if(c>a)
	{
		if(c>b)
		{
			printf("%d",c);
			
		}
		else
		{
			printf("%d",b);
		}
	}
}
