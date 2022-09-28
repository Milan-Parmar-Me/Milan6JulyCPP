#include<stdio.h>

int main()
{
	int *m,i;
	m=(int*)calloc(5,sizeof(int));
	m[0]=9;
	m[1]=9;
	m[2]=0;
	m[3]=2;
	m[4]=1;
	for(i=0;i<5;i++)
	{
		printf("%d\n",m[i]);
	}
	free(m);
		for(i=0;i<5;i++)
	{
		printf("%d\n",m[i]);
	}
	
}
