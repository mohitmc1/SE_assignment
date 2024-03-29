#include<stdio.h>
int main()
{
	int customerID,unit;
	double bill;
	char name[50];
    printf("enter the name : ");
    scanf("%s",&name);
    printf("\nenter the customer id : ");
    scanf("%d",&customerID);
    printf("\nenter the unit : ");
    scanf("%d",&unit);
	if(unit<=350){
		bill=unit*1.20;
		printf("\nbill is %lf",bill);
	}else if(unit>350&&unit<600){
		bill=unit*1.50;
		printf("\nbill is %lf",bill);
	}else if(unit<=600&&unit<800){
		bill=unit*1.80;
		printf("\nbill is %lf",bill);
	}else{
		bill=unit*2.00;
		printf("\nbill is %lf",bill);
	}
	
}
