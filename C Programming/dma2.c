#include<stdio.h>
int main()
{
	int *ptr;
	ptr=(int*)calloc(5,sizeof(int));
	ptr[0]=1;
		ptr[1]=12;
			ptr[2]=3;
				ptr[3]=10;
					ptr[4]=9;
					int i;
					for(i=0;i<5;i++)
					{
						printf("%d\n",ptr[i]);
					}
					free(ptr);
						ptr=(int*)calloc(5,sizeof(int));

				
					for(i=0;i<5;i++)
					{
						printf("%d\n",ptr[i]);
					}
					




	
}
