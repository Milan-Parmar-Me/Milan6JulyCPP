#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the size of a array\n");
	scanf("%d",&n);
	int milan[n];
	for (i=0;i<n;i++)
	{
		scanf("%d",&milan[i]);
		printf("%d\n",milan[i]+1);
	}
	
}
