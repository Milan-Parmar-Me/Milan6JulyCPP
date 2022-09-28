#include<stdio.h>
float gst(float a);
int main()
{
	int a;
	printf("enter the value");
	scanf("%d",&a);
	gst(a);
	
}
float gst(float a)
{
	a=a+(a*0.18);
	printf("%f",a);
}
