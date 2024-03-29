/*10.Write a program you have to make a summation of first and last Digit. (E.g., 
1234 Ans: -5)*/
#include<stdio.h>
int main()
{
	int num,first_dig,last_dig,digit,len=0,no,sum;
	printf("enter the number : ");
	scanf("%d",&num);
	last_dig=num%10;
	while(num>=10){
		num/=10;
	}
	first_dig=num;
/*	no=num;
	while(num>0){
		digit=num%10;
		num/=10;
		len++;
	}
	int a=1,b=1;
	while(a<len){
		b*=10;
		a++;
	}
		
		first_dig=no/b;*/
		sum=first_dig+last_dig;
		printf("\nsum : %d",sum);
		
 } 
