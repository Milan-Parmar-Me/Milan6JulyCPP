#include<stdio.h>
#include<string.h>
struct student{
	char name;
	int roll;
	float pr;
};
int main()
{
	struct student it[100];
	it[0].roll=10;
	//it[1].name="milan";
	strcpy(it[0].name,"milan");
	it[0].pr=5.6;
	
	printf("%f",it[0].pr);
}
