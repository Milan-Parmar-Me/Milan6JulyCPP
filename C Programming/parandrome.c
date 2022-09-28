#include <stdio.h>
int main()
{
	int n,c,s=0;
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		s=(n%10)+s*10;
		n=n/10;
	}
	if(c==s)
	{
		printf("yes");
	}
	else{
		printf("no");
	}
}
