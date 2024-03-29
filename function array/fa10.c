//10. WAP to perform Palindrome number using for loop and function
#include<stdio.h>
int no(int num){
	int remain,rev=0;
	for(;num!=0;num/=10){
		remain=num%10;
		rev=rev*10+remain;
	}
	return rev;
}
int main(){
	int num;
	printf("enter the number : ");
	scanf("%d",&num);
	int store = no(num);
	printf("\n%d",store);
}
