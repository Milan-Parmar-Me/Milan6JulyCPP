#include<stdio.h>
int main()
{
	int a,b,choich;
	
	printf("Multiplication=1\n");
	printf("summestiom=2\n");
	printf("division=3\n");
	printf("subraction=4\n");
	
	printf("enter your choich\n");
	scanf("%d",&choich);
	
	printf("enter the value of 2 num\n");
	scanf("%d%d",&a,&b);
	
	if(choich==1)
	{
		printf("%d",a*b);
	}
	else if(choich==2)
	{
		printf("%d",a+b);
	
	}
	else if(choich==3)
	{
		printf("%d",a/b);
		
	}
	else if(choich==4)
	{
		printf("%d",a-b);
	}
	return 0;
}
