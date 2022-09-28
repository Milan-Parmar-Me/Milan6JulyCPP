#include<stdio.h>
int  sub(int milan[]);
int main()
{
	int milan[120];
	
	printf("enter The first subject marks:  \n");
	scanf("%d",&milan[0]);
	
		printf("enter The second subject marks:  \n");
	scanf("%d",&milan[1]);
	
		printf("enter The third subject marks:  \n");
	scanf("%d",&milan[2]);
	
		printf("enter The fourth subject marks:  \n");
	scanf("%d",&milan[3]);
		printf("enter The Fifth subject marks:  \n");
	scanf("%d",&milan[4]);
	
	sub(milan);
}

int sub(int milan[])
{
	float pr=(milan[0]+milan[1]+milan[2]+milan[3]+milan[4])/5;
	
	if(pr>75.00)
	{
		printf("Distinction\n");
		
	}
	else if(pr>60.00 && pr<=75.00)
	{
		printf("First Class\n");
		
	}
	else if(pr>50.00 && pr<=60.00)
	{
		printf("Second Class\n");
		
	}
	else if(pr>35.00 && pr<=50.00)
	{
		printf("Pass class\n");
		
	}
	else 
	{
		printf("Fail\n");
	}
}
