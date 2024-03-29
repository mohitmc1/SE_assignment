#include<stdio.h>
int main(){
	int num;
	printf("enter the number : ");
	scanf("%d",&num);
	int i=1;
		while(i<=num){
		int j=1;
		while(j<=i){
			printf(" *");
			j++;
		}
		printf("\n");
		i++;
	}
	while(i<=num*2-1){
		int j=1;
		while(j<=num*2-i){
			printf(" *");
			j++;
		}
		printf("\n");
		i++;
	}
	
	
	
}
