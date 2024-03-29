/*If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe 
minimum bill should be of Rs. 256/-*/
#include<stdio.h>
int main()
{
	int customerID,unit;
	double charge_perunit,surchargeRate=18/100;
	char name[50];
    printf("enter the name : ");
    scanf("%s",&name);
    printf("\nenter the customer id : ");
    scanf("%d",&customerID);
    printf("\nenter the unit : ");
    scanf("%d",&unit);
	if(unit<=350){
		charge_perunit=1.20;
	}else if(unit>350&&unit<600){
		charge_perunit=1.50;
	}else if(unit<=600&&unit<800){
		charge_perunit=1.80;
	}else {
		charge_perunit=2.00;
	}
	double total_amount=unit*charge_perunit;
	if(total_amount>800){
		total_amount=total_amount*surchargeRate;
		printf("total maount is %lf",total_amount);
	}else if(total_amount<256){
		total_amount=256;
		printf("total amount is %lf",total_amount);
	}else{
		printf("total amount is %lf",total_amount);
	}
	
	
}
