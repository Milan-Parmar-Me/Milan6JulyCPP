#include<stdio.h>
#include<string.h>
struct product{
	int mrp;
	float fat;
	char nam[100];
	
};
int main()
{
struct product p1;
p1.fat=9.1;
p1.mrp=23;
strcpy(p1.nam,"milan parmar");


printf("%s\n",p1.nam);
printf("%d\n",p1.mrp);
printf("%f",p1.fat);

}
