//18. Write a C Program to Print the Multiplication Table of N
#include<stdio.h>
int main(){
	int N,i=1;
	printf("enter the number : ");
	scanf("%d",&N);
	while(i<=10){
		printf("\n%d x %d = %d",N,i,N*i);
		i++;
	}
}
