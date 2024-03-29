//5. WAP to print factorial of given number 
#include<stdio.h>
int main(){
	int fact=1,i,num;
	printf("enter the number you want factorial : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		fact=fact*i;
	}
	printf("the factorial of %d : %d",num,fact);
}
