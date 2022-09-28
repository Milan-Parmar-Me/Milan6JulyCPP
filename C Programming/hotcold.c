#include<stdio.h>
 void choich(int a);
 int main()
 {
 	int a;
 	scanf("%d",&a);
 	choich(a);
 }
 void choich(int a)
 {
 	if(a>50)
 	{
 		printf("hot");
	 }
	 if(a<50)
	 {
	 	printf("cold");
	 }
 }
