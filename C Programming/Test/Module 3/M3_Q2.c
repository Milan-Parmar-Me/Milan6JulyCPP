#include<stdio.h>
int main()
{
	int num;
	printf("Enter the Number\n");
	scanf("%d",&num);
	
	int i;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			printf("not Prime number");
			break;
		}
		else 
		{
			printf("prime number");
			break;
		}
	}
}
