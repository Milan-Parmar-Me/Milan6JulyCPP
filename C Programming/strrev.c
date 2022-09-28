#include<stdio.h>
#include<string.h>
#include<conio.h>
void jeep(char milan[]);
int main()
{
	char milan[123],kaka[100];
	printf("entert he ndd\n");
	gets(milan);
	strcpy(kaka,milan);
	jeep(milan);
	puts(milan);
	if(strcmp(kaka,milan)==0)
	{
		printf("yes");
	}
	
	
}
void jeep(char milan[])
{
	int i;
	char kaka[100];
	int n=strlen(milan);
	strcpy(kaka,milan);
	kaka[100];
	for(i=n-1;i>=0;i--)
	{
	printf("%c",milan[i]);
	
	
	
	}

	

	
}


