//(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include<stdio.h>
int main(){
	int num;
	printf("enter the number : ");
	scanf("%d",&num);
	int i=1;
	while(i<=num){
		int j=1;
	while(j<i){
		printf("%d + ",j);
		j++;
	}
	if(i=j){
		printf("%d + ",j);
	}
	
	i++;
	}
	
	
}

