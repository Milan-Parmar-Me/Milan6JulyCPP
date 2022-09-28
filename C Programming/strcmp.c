#include<stdio.h>
#include<string.h>
int main()
{
	char milan[12],kaka[12];
	gets(milan);
	strcpy(kaka,milan);
	strrev(milan);
	strcmp(kaka,milan);
	printf("%d",strcmp(kaka,milan));
}
