#include<stdio.h>
typedef struct add{
	int house;
	int block;
	char *city;
	char *state;
} sta;
void milan(sta k1);
int main()
{
	sta p1={12,3,"ahemdabad","gujrat"};
	
		sta p2={13,4,"ahemd","jrat"};
			sta p3={10,5,"ahemdad","gujt"};
				sta p4={12,3,"adabad","gat"};
					sta p5={12,3,"abad","guat"};
					milan(p1);
					milan(p2);
					milan(p3);
					milan(p4);
					milan(p5);
					




}
void milan(sta k1)

{
	printf("%d\n",k1.house);
		printf("%d\n",k1.block);
	printf("%s\n",k1.city);
		printf("%s\n",k1.state);


}

