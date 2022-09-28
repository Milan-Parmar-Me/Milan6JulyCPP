#include<stdio.h>

int gstCalculate(int size){
	int i;
	int valueArray[size];
	for(i = 0; i < size; i++){
		float orignalPrice;
		printf("\n Enter the orignal Value : ");
		scanf("%f", &orignalPrice);
		float gstAddedValue =  orignalPrice + 0.18*orignalPrice;
		printf("\n %f", gstAddedValue);
	}
}

int main(){
	int size ;
	printf("Enter  the size of array : ");
	scanf("%d", &size);
	gstCalculate(size);
}
