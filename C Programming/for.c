#include<stdio.h>
int main()
{
	int n,sum;
	printf("enter number\n");
	scanf("%d",&n);
	sum=0;
	for(int i=1;i<=n;i=i+1)
	{
	sum=sum+i;
	}
	printf("sum is %d",sum);
}
