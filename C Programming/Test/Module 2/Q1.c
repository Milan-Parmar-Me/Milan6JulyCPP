#include<stdio.h>
int main()
{
	int Squre,Qube,Number;
	
	printf("enter The Number\n");
	scanf("%d",&Number);
	
	Squre=Number*Number;
	Qube=Number*Squre;
	printf("Squre=%d\nQube=%d",Squre,Qube);
}
