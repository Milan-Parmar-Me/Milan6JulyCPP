#include<stdio.h>

int milan(int *a,int *b);
int main()
{
	int a=10,b=200;
	
	
	milan(&a,&b);
	
	
}
int milan(int *a,int *b)
{
	if (*a>*b){
		printf("a");
	}
	else if(*b>*a)
	{
		printf("b");
	}
}
