//14.Accept 5 numbers from user and find those numbers factorials 
#include<stdio.h>
int main(){
	int num[5],i=0;
	while(i<=4){
		printf("enter the number : ");
		scanf("%d",&num[i]);
		i++;
	}
	int fact=1,a=0;
	while(a<=5){
		fact*=num[a];
		a++;
	}
	printf("\nfactorial : %d",fact);
}
