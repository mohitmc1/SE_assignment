/*9. Write a program make a summation of given number (E.g., 1523 Ans: -11)*/
#include<stdio.h>
int main(){
	int num,sum=0,digit;
	printf("enter the number : ");
	scanf("%d",&num);
	while(num>0){
		digit = num%10;
		sum+=digit;
		num=num/10;
	}
	printf("sum : %d",sum);
}
