#include<stdio.h>
int k(int m[],int n);
int main()
{
	int i,n,m[n];
	scanf("%d",&n);
	m[n];
	for(i=0;i<n;i++){
		scanf("%d",&m[i]);
	}
	
	k(m,n);
	
}
int k(int m[],int n)
{
	int i,j;
	for (i=0;i<n;i++)
	{
		printf("%d\n",m[i]);
		
	}
	for(j=n-1
	;j>=0;j--){
		
		printf("%d\t",m[j]);
		
	}
}
