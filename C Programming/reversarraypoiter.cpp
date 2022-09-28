#include<stdio.h>
int main()
{
	char milan[]={'a'};
	int i;
	int k=&milan;
	for(i=0;i<26;i++)
	{
		
		printf("%d",*k);
		*k++;
	}
}
