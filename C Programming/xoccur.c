#include<stdio.h>
int main()
{
	int milan[10],n,i,c=1;
	printf("enter the ten number noob");
	for(i=0;i<10;i++)
	{
		scanf("%d",&milan[i]);
		
	}
	printf("enter the number you wanna search\n");
	scanf("%d",&n);
	for(i=0;i<10;i++){
		if(n==milan[i]){
			c=c+1;
			
		}
		
	
	}
		printf("%d\n",c);
}
