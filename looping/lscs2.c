//2. WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>
int main(){
	int i=1,num[5];
	while(i<=5){
		printf("\nnumber %d : ",i);
		scanf("%d",&num[i]);
		i++;
	}
	printf("\nyou entered the following numbers : ");
	i=1;
	while(i<=5){
		printf("\n%d",num[i]);
		i++;
	}
	
}
