#include<stdio.h>
void kia(char milan[]);
int main()
{
	char milan[100];
	printf("enter the string;\n");
	gets(milan);
	kia(milan);
	
	
}
void kia(char milan[])
{ int i,j,kaka=0;
for(i='a';i<='z';i++)
{
	kaka=0;
	for(j=0;milan[j]!='\0';j++)
	{
		if(i==milan[j])
		{
			kaka++;
		}
		
	}
	if(kaka>0)
	{
		printf("%c  %d\n",i,kaka);
	}
}
	}


