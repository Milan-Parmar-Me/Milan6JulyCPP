#include<stdio.h>
int milan(int a);
int main()
{
	int a,sum=0;
	scanf("%d",&a);
int	t=a;
	milan(a);
	
}
int milan(int a)
{
int sum=0;int t=a;


	while(a>0)
	{
		
		sum=(sum*10)+a%10;
		a=a/10;
		
	}
	if(t==a)
	{
		printf("para");
	 } 
	 else{
	 	printf("not");
	 }
}
