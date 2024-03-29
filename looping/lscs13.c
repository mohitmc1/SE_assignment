//13.calculate the Factorial of a Given Number using while loop 
#include<stdio.h>
int main(){
	int fact=1,num;
	printf("enter the number : ");
	scanf("%d",&num);
	while(0<num){
		fact*=num;
		num--;
	}
	printf("factorial : %d",fact);
}
