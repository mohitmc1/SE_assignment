//25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n) 
#include<stdio.h>
int main(){
	int num;
	printf("enter the number : ");
	scanf("%d",&num);
	int i=1;
	while(i<num){
		printf("(%d*%d) + ",i,i);
		i++;
	}
	if(i=num){
		printf("(%d*%d)",i,i);
	}
}
