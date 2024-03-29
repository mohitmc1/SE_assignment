//16. Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>
int main(){
	int num;
	printf("enter the number : ");
	scanf("%d",&num);
	int i=0,sum=0;
	while(i<=num){
		sum+=i;
		i++;
	}
	printf("sum of natural numbers : %d",sum);
}
