#include<stdio.h>
int milan(int n);

int main()
{
	int n,p;
	printf("enter the number\n");
	scanf("%d",&n);
	p=n;
	milan(n);

	
}
int milan(int n)
{int p;
p=n;
	int t=0;
	while(n>0)
	{
		t=(t*10)+(n%10);
		n=n/10;
		
	}
	printf("%d",t);
		if(p==t)
	{
		
		printf("palidrone\n");
	}
	else
	{
		printf("not palidrone");
	}
	
}
