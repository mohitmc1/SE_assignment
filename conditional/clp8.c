//WAP to accept the height of a person in centimeters and categorize the 
//person according to their height.
#include<stdio.h>
int main()
{
	double height;
	printf("enter a height in cm : ");
	scanf("%lf",&height);
	if(height<=150){
		printf("your are short in height");
	}else if(height>150 && height<=165){
		printf("you are average in height");
	}else{
		printf("you are tall");
	}
	
}
