#include<stdio.h>
int main(){
	int num[5],i;
	for(i=0;i<=4;i++){
		printf("\nenter the number : ");
		scanf("%d",&num[i]);
		int digit,reverse=0;
		for(;num[i]>0;num[i]/=10){
			digit=num[i]%10;
			reverse=reverse*10+digit;
		}
		printf("\nreverse : %d\n",reverse);
	}
}
