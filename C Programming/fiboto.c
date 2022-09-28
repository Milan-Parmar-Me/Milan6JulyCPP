#include<stdio.h>
 int fibo(int n);
 int main()
 {
 	int n;
 	scanf("%d",&n);
 	printf("your term is %d",fibo(n));
 	
 	
 }
 int fibo(int n)
 {
 	if (n==1){
 		return 1;
	 }
	 
	 else if(n==0){
	 return 0;
	 }
 	int fnm1=fibo(n-1);
 	int fnm2=fibo(n-2);
 	int total=fibo(n-1)+fibo(n-2);
 	return total;
 	
 }
 
