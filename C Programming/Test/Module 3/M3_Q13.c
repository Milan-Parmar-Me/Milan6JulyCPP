#include<stdio.h>
int main()
{
	int i,milan[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&milan[i]);
	
		
		
	}
	int y;
	printf("enter the position u wanna search");
	scanf("%d",&y);
	for(i=0;i<10;i++)
	{
		if(milan[y]==milan[i])
		{
			printf("%d",milan[i]);
			break;
		}
	}
}
