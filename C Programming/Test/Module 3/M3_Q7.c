#include<stdio.h>
int main()
{


	int num;
	printf("enter the number: \n");
	scanf("%d",&num);
	
	int i;		int t=0;

	while(num>0)
	{
		t= t+num%10;
		num=num/10;
		
			

	}
	printf("%d",t);
	

}
