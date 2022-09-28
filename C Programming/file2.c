#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("milan.txt","w");
	int i;
	int milan=0;
	char m;
	
	for(i=0;i<20;i++)
	{
		fscanf(fptr,"%c",&m); 
		if(m=='a'|| m=='e'||m=='i'||m=='o'||m=='u'){
			milan++;
		}
	}
	fprintf(fptr,"%d",milan);
	fptr=fopen("milan.txt","r");
	int b,c;
	
	fscanf(fptr,"%d",&b);
	printf("%d",b);
	fscanf(fptr,"%d",&c);
	printf("%d",c);
}
