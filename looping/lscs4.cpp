//4. WAP to print table up to given numbers 
#include<stdio.h>
int main()
{
	int num,i;
	printf("enter the number you want table : ");
	scanf("%d",&num);
	for(i=1;i<=10;i++){
		printf("\n%d x %d = %d",num,i,num*i);
	}
}
