#include<stdio.h>
void kok(char milan[]);
int main()
{
	char milan[20];
	printf("entert he atat;\n");
	gets(milan);
	
	kok(milan);
	
}

void kok(char milan[])
{
	int i,c;
	c= strlen(milan);
	for (i=c-1;i>=0;i--)
	{
		char kaka=milan[i];
		if(milan[i]==kaka)
{
	printf("y");
}
		printf("%c",milan[i]);	}
	
	
	
}
