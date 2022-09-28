#include<stdio.h>
float circle(float radius);
float triangle(float radius);
int rectangle(int l,int w);
int main()
{
	int m;
	printf("Enter the number \n");
	scanf("%d",&m);
	if(m==1)
	{ int radius;
		circle(radius);
	}
	else if(m==2)
	{ int radius;
		triangle(radius);
	}
	else if(m==3)
	{int l, w;
		rectangle(l,w);
	}
	else
	{
		printf("Invalid Input\n");
	}
}
float circle(float radius)
{ 
	printf("enter the number");
	scanf("%f",&radius);
	
	printf("%f",3.14*radius*radius);
	
	
}
float triangle(float radius)
{
	
	printf("Enter the radius of triangle\n");
	scanf("%f",&radius);
	printf("%f is anser of triangle radius",0.5*3.14*radius*radius);
}
int rectangle(int l,int w)
{
	printf("Enter ledth and width of recangle\n");
	scanf("%f %f",&l,&w);
	printf("%d",l*w);
}
