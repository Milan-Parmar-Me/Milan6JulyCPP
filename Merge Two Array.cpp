#include<iostream>
#include<vector>
using namespace std;
int merge(int arr1[],int n,int arr2[],int m,int arr3[])
{
	int i=0,j=0,k=0;
	while(i<n && j<m)
	{
		if(arr1[i]<arr2[j])
		{
			arr3[k]=arr1[i];
			k++;
			i++;
			
		}
		else
		{
			arr3[k]=arr2[j];
			k++;
			j++;
			
		}
		while(i<n)
		{
			arr3[k]=arr1[i];
			k++;
			i++;
			
		}
		while(j<m)
		{
			arr3[k]=arr2[j];
		}
		
	}
	for(int i=0;i<5;i++){
		
		cout<<arr3[i]<<" ";}
		cout<< endl;

	
}
	int print(int arr[],int size)
	{
		for(int i=0;i<size;i++){
		
		cout<<arr[i]<<" ";}
		cout<< endl;
	}
int main()
{
	int milan[3]={1,2,3};
	int kaka[2]={3,4};
	int ml[5]={0,5};
	
	merge(milan,3,kaka,2,ml);
print(ml,5);
	
}

