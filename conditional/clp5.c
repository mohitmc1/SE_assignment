// Check Number Is Positive or Negative 
#include<stdio.h>
int main()
{
	int number;
	printf("enter a number : ");
	scanf("%d",&number);
	if(number>0){
	printf("number is positive");
	}else if(number==0){
	printf("number is zero");
	}else{
	printf("number is negative");
	}
}
