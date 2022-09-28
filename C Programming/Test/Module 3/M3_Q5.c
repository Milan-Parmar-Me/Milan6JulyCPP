#include<stdio.h>
int fib(int m);
int main()
{
	int m;
	printf("enter the number\n");
	scanf("%d",&m);
	fib(m);
	
}
int fib(int m)
{
	int i,a=0,b=1,c;
	for (i=0;i<=m;i++)
	{
		printf("%d\n",a);
		
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
	 
}
