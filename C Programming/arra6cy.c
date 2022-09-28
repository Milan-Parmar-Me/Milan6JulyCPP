#include<stdio.h>
int  milan(int lal[],int n);
int main()
{
	int n;
	printf("enter the size of an array\n");
	scanf("%d",&n);
	int lal[n];
	milan(lal,n);
}
int  milan(int lal[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{int kaka=lal[i];

		scanf("%d",&kaka);
			int kalakaka=kaka*9;
		printf("%d",kalakaka);
	}
}

