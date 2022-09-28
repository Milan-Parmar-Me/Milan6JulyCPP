#include<stdio.h>
int fact(int n);
int main()
{
	int n;
	printf("Enter the Number For Find Factorial Number\n");
	scanf("%d",&n);
	fact(n);
	
	
}
int fact(int n)
{
	int milan=1,i;
	for(i=1;i<=n;i++)
	{
		milan=milan*i;
	}
	printf("Factorial Of %d is %d",n,milan);
}
