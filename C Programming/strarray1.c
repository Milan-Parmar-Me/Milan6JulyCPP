#include<stdio.h>
void slice(char milan[],int n,int m);
int main()
{
	int m,n;
	char milan[]="milan parmar";
	slice(milan,3,6);
	
}
void slice(char milan[],int n,int m)
{
	char newmilan[200];int i,j=0;
	for(i=n;i<=m;i++,j++)
	{
		newmilan[j]=milan[i];
	}
	newmilan[j]='\0';
	puts(newmilan);
}
