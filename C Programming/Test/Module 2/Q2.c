#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,Simple_Interest,Compound_Interest;
	printf("Enter the Amount\n");
	scanf("%f",&p);
	printf("Enter the Timr in year\n");
	scanf("%f",&t);
	printf("Enter the interest rate\n");
	scanf("%f",&r);
	Simple_Interest=(p*t*r)/100.0;
	Compound_Interest=p*(pow(1+r/100,t)-1);
	
	printf("Simple Interest=%f\n",Simple_Interest);
	printf("Compound Interest=%f\n",Compound_Interest);
	
}
