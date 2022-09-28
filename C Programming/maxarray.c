#include<stdio.h>
int milan(int kaka[],int m);
int main()
{int i,m,kaka[m],mx=0;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&kaka[i]);
		if(kaka[i]>mx){
			mx=kaka[i];
		}
	}
	printf("%d",mx);
	}
