#include<stdio.h>
int milan(int n);
int main()
{
	int n,b;
	printf("Enter the number \n");
	scanf("%d",&n);
	milan(n);
	b=n;
	printf("%d",milan(n));
	
	
}
int milan(int n)
{
	int t=0;
	if(n==0)
	{
		return t;
	}
	t=(t*10)+n%10;
return milan(n/10);
	

}
