#include<stdio.h>
struct student{
	int roll;
	char *name;
};
void student(struct student a1);
struct teacher{
	char name[20];
	char sub[122];
};
void teacher(struct teacher t1);

struct staff{
	char name;
	char work;
};
void staff(struct staff st1);
int main()
{
 struct student a1;
 printf("Enter the student documents");
 scanf("%s",&a1.name);
 scanf("%d",&a1.roll);
 struct student a2;
 printf("\nenter the secoond student name \n");
  scanf("%s",&a2.name);
 scanf("%d",&a2.roll);
 student(a1);
 student(a2);
 
 struct teacher b[2];
 printf("Enter the teacher documents");
 scanf("%s",&b[0].name);
 scanf("%s",&b[0].sub);
 printf("\nenter the techer student name \n");
  scanf("%s",&b[1].name);
 scanf("%s",&b[1].sub);
 
 struct staff c[2];
 printf("Enter the first staff member name ");
 scanf("%s",&c[0].work);
 scanf("%s",&c[0].name);
 printf("Enter the second worker name \n");
 scanf("%s",&c[1].name);
 scanf("%s",&c[1].work);
 
 staff(c[0]);
staff(c[1]);
 
 teacher(b[0]);
 teacher(b[1]);
 
}
void student(struct student a1)
{
	printf("%s  ",a1.name);
	
}
void teacher(struct teacher t1)
{
	printf("%s %s\n\n",t1.name,t1.sub);
	
}
void staff(struct staff st1)
{
	printf("%s %s \n\n",st1.name,st1.work);
	
}
