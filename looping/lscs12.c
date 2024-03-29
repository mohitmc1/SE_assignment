//12. Program of Armstrong Number in C Using For Loop & While Loop
#include<stdio.h>
#include<math.h>
int main()
{
	int num,dig,result=0,n=0,orignal_num;
	printf("enter the number : ");
	scanf("%d",&num);
	orignal_num=num;
	while(orignal_num!=0){
		orignal_num/=10;
		n++;
	}
	orignal_num=num;
	while(num!=0){
		dig=num%10;
		result+=pow(dig,n);
		num/=10;
	}
	if(result==orignal_num){
		printf("\n%d is armstrong number",orignal_num);
	}else{printf("\n%d is not armstrong number",orignal_num);}
	
}
