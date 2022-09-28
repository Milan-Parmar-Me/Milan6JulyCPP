#include<stdio.h>

float milan(int arr[],int n);
int main()
{
	int n;
	printf("enter the size of an array\n");
	scanf("%d",&n);
	int arr[n];
	milan(arr,n);
	
}
float milan(int arr[],int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("enter the value of product:");
		scanf("%d",&arr[i]);
		
		
		int kaka=arr[i];
		float kaka2=arr[i]+arr[i]*0.18;
		
		printf("product with gst is %f",kaka2);
	}
}
