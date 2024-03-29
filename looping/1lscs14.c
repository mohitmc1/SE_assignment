//14.Accept 5 numbers from user and find those numbers factorials
#include<stdio.h>
int main(){
	int i=0,num;
	while(i<=4){
		printf("\nenter the number : ");
		scanf("%d",&num);
		int a=num,fact=1;
	while(a>0){
		fact*=a;
		a--;
		i++;
	}
	printf("\nfactorial of %d : %d",num,fact);
	}
	
}
