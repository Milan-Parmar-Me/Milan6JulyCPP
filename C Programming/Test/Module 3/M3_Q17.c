#include<stdio.h>
int fob(int n);
int main()
{
	int n;
	printf("enter the Place u want to find\n");
	scanf("%d",&n);
	fob(n);
	printf("%d",fob(n));
	
	
}
int fob(int n)

{if(n==1)
{
	return 1;
}
if (n==0)
{
	return 0;
}
	int kaka=fob(n-1)+fob(n-2);
	
	return kaka;
}
