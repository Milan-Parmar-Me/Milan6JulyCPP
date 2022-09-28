#include <stdio.h>
float far(float celc);
int main()
{int a;
	
	scanf("%d",&a);
	printf("%f",far(a));
	return 0;
}
float far( float celc)
{
	float total=celc*(9.0/5.0)+32;
	
	
	return total;
}
