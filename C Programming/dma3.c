#include<stdio.h>
int main()
{
	int *ptr;
	ptr=(int*)calloc(2,sizeof(int));
//	ptr[0]=1;
	//ptr[1]=34;
//	realloc(ptr,3);
	//ptr[0]=5;
	//ptr[1]=3;
//	ptr[2]=4;
	int i;
	for(i=0;i<5;i++)
{
	scanf("%d",&ptr[i]);
	printf("%d\n",ptr[i]);
}
}
