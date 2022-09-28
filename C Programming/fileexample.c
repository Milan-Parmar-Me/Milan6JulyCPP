#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("milan.txt","r");
	char m;
	int i;
	for(i=0;i<=18;i++){
		fscanf(fptr,"%c",&m);
		printf("%c",m);
	
	
	}
	fclose(fptr);
}
