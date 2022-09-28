#include <stdio.h>
 int square(int a);
 int main()
 {
 	int a;
 	scanf("%d",&a);
 	printf("%d",square(a));
 }
 int square(int a)
 {
 	return a*a;
 }
