#include<stdio.h>
struct animal{
	int age;
	char *name;
	float weight;
	
};
void printValues(struct animal p1);
int main()
{
	struct animal k1={12,"ganga",120.56
	};
	printValues(k1);
}
void printValues(struct animal p1)
{
	printf("%d\n",p1.age);
	printf("%s\n",p1.name);
	printf("%f",p1.weight);

}
