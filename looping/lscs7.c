/*7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 
82746 */
#include<stdio.h>
int main(){
	int num,i;
	printf("enter the number : ");
	scanf("%d",&num);
	while(num!=0){
		i=num%10;
		printf("%d",i);
		num=num/10;
	}
}
