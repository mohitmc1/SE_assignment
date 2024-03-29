//4. WAP to find factorial using recursion 
#include<stdio.h>
int factorial(int n){
		if(n==0){
		return 1;
	}
	n=n*factorial(n-1);
	return n;
}
int main(){
	int num,store;
	printf("enter  the number : ");
	scanf("%d",&num);
	store = factorial(num);
	printf("\nfactorial : %d",store);
}
