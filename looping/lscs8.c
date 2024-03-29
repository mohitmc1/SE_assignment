/*8. Write a program to find out the max from given number (E.g., No: -1562 
Max number is 6) */
#include<stdio.h>
int main(){
	int num,digit,max=0;
	printf("enter the number : ");
	scanf("%d",&num);
	num=abs(num);
	while(num>0){
		digit=num%10;
		if(digit>max){
			max=digit;
		}
		num/=10;
	}
	printf("%d is maximum among the numbers",max);
}
