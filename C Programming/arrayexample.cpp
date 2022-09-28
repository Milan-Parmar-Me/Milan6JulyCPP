#include <stdio.h>
int main()
{int arra[]={1,2,3};
	int *ptr=&arra[0];
	int *nptr=arra;
	printf("%u %u %u",*ptr,&arra[0],arra);
}
