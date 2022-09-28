#include<stdio.h>
int main()
{
	int i,j,h=1,k=0;
	for (i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if (j==2)
			{
				printf(" %d ",k);
			}
			else if (j==4)
			{
				printf(" %d ",k);
			}
			else{
			
			printf(" %d ",h);
		}
			
		}
		printf("\n");
	}
}
