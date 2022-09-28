#include<stdio.h>
void check(char milan[],char m);
int main()
{
	char milan[100];
	char m;
	printf("entert the number\n");
	gets(milan);
	printf("entert ehh character\n");
	scanf("%c",&m);
	check(milan,m);
	
}
void check(char milan[],char m)
{
	int i;
	for (i=0;milan[i]!='\0';i++)
	{
		if(milan[i]==m){
			printf("yes\n");
			return;
			
		}
		
	}
	printf("not present\n");
}
