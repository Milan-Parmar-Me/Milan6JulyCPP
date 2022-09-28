#include <stdio.h>
int main()
{
	int i,num,oco=0,eco=0,osum=0,esum=0;
	
	for(i=1;i<=10;i++)
	{
		printf("enter 10 times num: ");
		scanf("%d",&num);
		
		if (num%2==0)
		{
			eco=eco+1;
			esum=esum+num;
		}
		else
		{
			oco=oco+1;
		}
    
	}
	printf("oco=%d\n",oco);
	printf("eco=%d\n",eco);
	printf("even sum is%d",esum);
	
	
	
}
