#include<stdio.h>
int main()
{
	int milan[5];
	int i,j;int temp=0;
	printf("enter the five values\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&milan[i]);
	
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(milan[i]>milan[j])
			{
			temp=milan[i];
			milan[i]=milan[j];
			milan[j]=temp;
			}
		}
	}
	printf("array elements:");
	for(i=0;i<5;i++)
	{
		printf("%d\n",milan[i]);
		
	}
	
}
