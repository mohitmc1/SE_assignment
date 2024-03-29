// Write a program to find out the max number from given array using function
#include<stdio.h>
int findMax(int arr[],int size){
	int max=arr[0],i;
	for(i=1;i<=size;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}
int main(){
	int arr[]={1,3,5,7,6,9,2};
	int size=sizeof(arr)/sizeof(arr[0]);
	int max = findMax(arr,size);
	printf("maximum : %d",max);
	
}
