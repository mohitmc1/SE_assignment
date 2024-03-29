/*WAP of Addition, Subtraction, Multiplication and Division using Switch 
case.(Must Be Menu Driven)*/ 
#include<stdio.h>
int main(){
	float a,b;
	int n;
	printf("enter the two number : ");
	scanf("%f %f",&a,&b);
		printf("1 : addition\n2 : subtraction\n3 : multiplication\n4 : division\n5 : leave\n");
	while(2){
	scanf("%d",&n);
	switch(n){
		case 1:
			printf("a+b=%.2f\n",a+b);
			break;
		case 2:
			printf("a-b=%.2f\n",a-b);
			break;
		case 3:
			printf("axb=%.2f\n",a*b);
			break;
		case 4:
			printf("a/b=%.2f\n",a/b);
			break;
		case 5:
			return;
		default:
			printf("invalid!\n");
	}
	
	}
}
