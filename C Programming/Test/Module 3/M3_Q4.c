#include<stdio.h>
int main()
{
	int num;
	printf("press \nArea Of triangle = 1\nArea Of Rectangle==2\nArea of Circle==3\n");
	printf("Enter number\n");
	scanf("%d",&num);
	int r;
	int l,w,c;
	switch(num)
	{
		case 1:    
	printf("Enter Radious of triangle\n");
	scanf("%d",&r);
	float milan=3.14*0.5;
	
	printf("%f",milan*r*r);
	break;
	
	case 2: printf("enter the value of Lendh and width of rectangle\n");
	scanf("%d  %d",&l,&w);
	
	printf("%d",l*w);
	break;
	
	case 3:
		printf("enter the radius circle \n");
		scanf("%d",&c);
		float kaka=c*c;
		printf("%f",3.14*kaka);
		break;
	}
	printf("invalid Input;");
}
