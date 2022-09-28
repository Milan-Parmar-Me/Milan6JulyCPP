#include<stdio.h>
int main()
{
	int r, n,milan=0;
	
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
	milan=	r*r*r+milan;
		n=n/10;
	}
	printf("%d",milan);
	
}
