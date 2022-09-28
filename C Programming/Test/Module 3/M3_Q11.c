#include<stdio.h>
int main()
{
	int milan[10];
	int i,m=0;
	printf("enter ten value\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&milan[i]);
		if(milan[i]>m)
		{
			m=milan[i];
		}
	}
	printf("%d",m);
	
}
