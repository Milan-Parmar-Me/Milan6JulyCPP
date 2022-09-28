#include<stdio.h>
char str(char milan[]);
int main()
{
	char milan[122];
	printf("Enter the String\n");
	gets(milan);
	str(milan);
}
char str(char milan[])
{
	char milan2[122];
	strcpy(milan2,milan);
	puts(milan2);
}
