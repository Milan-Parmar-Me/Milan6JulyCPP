#include<stdio.h>
void vowel(char milan[]);
int main()
{
	char milan[100];
	printf("enter the string\n");
	gets(milan);
	vowel(milan);
}
void vowel(char milan[])
{
	int i;

	for(i=0;milan[i]!='\0';i++)
	{
		if(milan[i]==' '){
			milan[i]=239;
		}
	}
	puts(milan);
}
