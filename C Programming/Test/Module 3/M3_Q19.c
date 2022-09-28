#include<stdio.h>
int ptr(int a,int b);
int main()
{
	int a,b;
	printf("Enter the number");
	scanf("%d",&a);
	printf("\nenter second number\n");
	scanf("%d",&b);
	ptr(a,b);
	
}
int ptr(int a,int b)
{
	int *ptr=&a;
	int *ptr2=&b;
	
	printf("Sum is %d",*ptr+*ptr2);
}
