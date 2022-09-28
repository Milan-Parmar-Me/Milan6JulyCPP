#include<stdio.h>
#include<string.h>
int main()
{
	char milan[]="Greatest Of All time";
	char got[]=" Milan p";
	char *ptr=&milan;
	char*ptr2=&got;
	printf(" %s\n",strcat(ptr,ptr2));
	
	//int i,j;
	//for(i=0;*(ptr+i)!=NULL;i++);
	//for(j=0;*(ptr2+j)!=NULL;j++);
	//{
	//	*(ptr+i)=*(ptr2+j);
	//}
//	*(ptr+i)=NULL;
	//printf("%s",strcat(ptr,ptr2));
}
