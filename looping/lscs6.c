//6. WAP to print Fibonacci series up to given numbers
// 1 1 2 3 5 8 13
#include<stdio.h>
int main(){
	int i,num,first=0,second=1,next;
	printf("enter the number : ");
	scanf("%d",&num);
	for(i=0;i<=num;i++){
		if(i<=1){
			next=i;
		}else{
			next=first+second;
			first=second;
			second=next;
		}
		printf("\n%d",next);
	}
}
