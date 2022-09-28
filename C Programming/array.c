#include<stdio.h>
int milan(int kaka[],int i);
int main()
{
int n,	kaka[n];
	
	milan(kaka,n);
	
}
int milan(int kaka[],int i)
{
	int even=0;
	int odd=0;
	for(i=0;i<8;i++)
	{
		scanf("%d",&kaka[i]);
	
	if(kaka[i]%2==0)
	{
		even++;
	}
	else
	{
		odd++;
	}
}
	printf("even %d odd %d",even,odd);
}

