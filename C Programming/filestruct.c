#include<stdio.h>
struct milan{
		char name[123];
	int marks;
	float cgpa;
	char course[80];
};
int main()
{
	FILE *fptr;
	fptr=fopen("milan.txt","w");
int i;

for(i=0;i<5;i++)

{
	struct milan m[i];

	printf("enter no %d student documents",i);
	scanf("%s",&m[i].name);
	scanf("%d",&m[i].marks);
	scanf("%f",&m[i].cgpa);
	scanf("%s",&m[i].course);
	fprintf(fptr,"%s",m[i].name);
	fprintf(fptr,"%d",m[i].marks);
	fprintf(fptr,"f",m[i].cgpa);
	fprintf(fptr,"%s",m[i].course);
}
fclose(fptr);
	
	
	}
