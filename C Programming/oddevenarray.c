#include<stdio.h>
int mia(int mil[]);
 int main(){
 int mil[5]={1,4,5,6,7};
 mia(mil);
 
 }
 int mia(int mil[])
 {int i;int odd=0;int even=0;
 	for(i=0;i<5;i++)
 	{
 		if(mil[i]%2==0)
 		{
 			odd++;
		 }
		 else{
		 	even++;
		 }
	 }		 printf("odd=%d aand even=%d",odd,even);

	 
 }
