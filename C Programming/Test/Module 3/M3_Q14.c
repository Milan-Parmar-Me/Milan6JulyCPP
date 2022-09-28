#include<stdio.h>
int main()
{int i,j;
int kaka=0;
	int milan[5][5]={{1,2,3,4,5},{6,7,8,9,10}};

	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
					printf("%d\n %d\n",milan[i][j]);
					
					if(milan[i][j]>kaka)
					{
						kaka=milan[i][j];
					}

		}
	}
	printf("largest num is %d",kaka);
}
