#include<stdio.h>
int pr(int a,int b,int c);
int main(){
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
printf("%d",pr(a,b,c));

}
int pr(a,b,c)
{
	return ((a+b+c)/3);
}
