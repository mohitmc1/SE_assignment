//16.Accept 5 numbers from user and perform sum of array
#include<stdio.h>
int sum(int num[],int n){
	int i,sum=0;
	for(i=0;i<=n-1;i++){
		sum=sum+num[i];
	}
	return sum;
}
int main(){
	int n[5],i;
	for(i=0;i<=4;i++){
		printf("\nnumber %d : ",i+1);
		scanf("%d",&n[i]);
	
	}
	int addition = sum(n,5);
	printf("\nsum : %d",addition);
}
