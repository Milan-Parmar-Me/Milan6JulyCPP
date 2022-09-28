#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("enter the values\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{
	
	
		if(a>c)
		{
		printf("ans is %d",a);	
		}
		else
		{
			printf("ans is %d",c);
		}
		else
		{
			printf("ans is %d",b)
		}
	}
	
}
