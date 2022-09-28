#include<stdio.h>
void kaka(char milan[]);
int main()
{char milan[100];
	printf("enter the letter\n");
	gets(milan);
	kaka(milan);
	
}
void kaka(char milan[])
{
	int i,t=0;
	for(i=0;milan[i]!='\0';i++)
	{
		
		if(milan[i]=='a'||milan[i]=='A'||milan[i]=='E'||milan[i]=='e'||milan[i]=='i'||milan[i]=='I'||milan[i]=='o'||milan[i]=='O'||milan[i]=='u'||milan[i]=='U')
	{
		t++;
	}}
	printf("%d",t);
}
