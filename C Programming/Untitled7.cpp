#include<stdio.h>
int fib(int milan[],int n);
int main()
{
	int n,milan[n];
	printf("enter the number of si");
	scanf("%d",&n);
	milan[n];
	
	fib(milan,n);
	
	
}
int fib(int milan[],int n){int i;
milan[0]=0;
milan[1]=1;

	for(i=2;i<n;i++)
	{
	
		 milan[i]=(i-1)+(i-2);
		 	printf("%d\t",milan[i]);
	}
}
