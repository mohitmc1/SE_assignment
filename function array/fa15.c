#include<stdio.h>
void bubblesort(int num[],int n){
	int i,j;
	for(i=0;i<=n-1;i++){
		for(j=0;j<n-1;j++){
			if(num[j]>num[j+1]){
				int temp;
				temp=num[j+1];
				num[j+1]=num[j];
				num[j]=temp;
			}
		}
	}
}
int main(){
	int num[5],i;
	for(i=0;i<=4;i++){
		printf("\nnumber %d : ",i+1);
		scanf("%d",&num[i]);
	}
	bubblesort(num,5);
	for(i=0;i<=4;i++){
		printf("\n%d",num[i]);
	}
	
}
