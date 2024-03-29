/*Accept 2 numbers from user and swap 2 numbers with using 3rd variable
and without using 3rd variable*/
#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter a first number : ");
	scanf("%d",&a);
	printf("enter a second number : ");
	scanf("%d",&b);
	c=b;
	b=a;
	a=c;
	printf("%d %d",a,b);
	
}
