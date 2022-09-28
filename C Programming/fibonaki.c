#include <stdio.h>
int fibo(int a);
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d",fibo(a));
	return 0;
}

int fibo(int a)
{if(a==1){
	return 1;
}
if (a==0)
{
	return 0;
}
	int fibonm1=fibo(a-1);
	int fibonm2=fibo(a-2);
	int fibo= fibonm1+fibonm2;
	return fibo;
}
