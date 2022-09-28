#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("app.c","r");
	
     printf("%c",fgetc(fptr));
	
	fclose(fptr);
	
}
