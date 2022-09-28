#include <stdio.h>
int main()
{
	char x;
	printf("enter your real marks otherwise i will fuck you\n");
	scanf("%c",&x);
	
	if(x<'b')
	{
		printf("capital");
	}
	else if(x>'Z')
	{
		printf("small");
	}
}
