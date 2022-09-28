#include<stdio.h>
int main()
{
	int c,a,b;
	printf("enter the choshbeetween 1-5\n");
	scanf("%d%d%d",&c,&a,&b);
	
	if(c==1)
	{
		printf("%d",a+b);
	}
	else if(c==5)
	{
		printf("%d",a-b);
	}
}




