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
		if(milan[i]=='a')
		{
			milan[i]='A';
		}
			if(milan[i]=='e')
		{
			milan[i]='E';
		}
			if(milan[i]=='i')
		{
			milan[i]='I';
		}
			if(milan[i]=='o')
		{
			milan[i]='O';
		}
			if(milan[i]=='u')
		{
			milan[i]='U';
		}
	}
	gets(milan);
}
