#include<stdio.h>
#include<stdlib.h
>
int main()
{
	
	int *ptr;
	ptr=(int*)malloc(2*sizeof(int));
	int a,b;
	scanf("%d %d",&a,&b);
	ptr[0]=a;
	ptr[1]=b;
	printf("ans of rectangle is %d",ptr[0]*ptr[1]);
	
}
