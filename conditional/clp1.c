//write a c program to acccept two integers and check whether they are equal or not
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a first number : ");
	scanf("%d",&a);
	printf("enter a second number : ");
	scanf("%d",&b);
	if (a==b){
		printf("a and b are equal");
	}
	else{
		printf("a and b are not equal");
	}
	
}
