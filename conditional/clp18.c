//18. Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
int main()
{
	double cost_price,selling_price,profit,loss;
	printf("\nenter the value at which you buy the product : ");
	scanf("%lf",&cost_price);
	printf("\nenter the value at which you sell the product : ");
	scanf("%lf",&selling_price);
	if(selling_price>cost_price){
		profit=selling_price - cost_price;
		printf("%.2lf is profit",profit);
	}else{
		loss=cost_price-selling_price;
		printf("%.2lf is loss",loss);
	}
	
}
