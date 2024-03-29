//15.Calculate sum of 10 numbers using of while loop 
#include<stdio.h>
int main(){
	int num,i=0,sum=0;
	while(i<=9){
		printf("enter the number : ");
	scanf("%d",&num);
		sum+=num;
	i++;
	}
	
	printf("sum of 10 numbers : %d",sum);
	
	
}
