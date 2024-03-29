//23. C Program to Reverse a Number Using FOR Loop
#include<stdio.h>
int main(){
	int num;
	printf("enter the number : ");
	scanf("%d",&num);
	for(;num>0;num/=10){
		int dig=num%10;
		printf("%d",dig);
	}
}
