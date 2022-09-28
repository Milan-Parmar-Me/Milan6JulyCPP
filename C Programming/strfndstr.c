#include<stdio.h>
int main()
{
	char mi[100],m[10];
	
gets(mi);
gets(m);
int i,j;
int a=strlen(mi);
int b=strlen(m);
for(i=0;i<a;i++)
{
	for(j=0;j<b;j++)
	{
		if(mi[i+j]!=m[j])
		{
			break;
		}
	}
	if(j==b)
	printf("%d\n",i+1);
}

}
