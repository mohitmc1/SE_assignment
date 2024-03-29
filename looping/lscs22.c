/*22. Accept 3 numbers from user using while loop and check each numbers 
palindrome */
#include<stdio.h>
int main(){
	int num;
	int i=0;
	while(i<=2){
		printf("\nenter the number : ");
		scanf("%d",&num);
		int dig,reverseNum=0;
		int orignalNum=num;
		while(num>0){
			dig=num%10;
			reverseNum=reverseNum*10+dig;
			num=num/10;
		}
		if(reverseNum==orignalNum){
			printf("\n%d is palindrome",orignalNum);
		}else{
			printf("\n%d is not palindrome",orignalNum);
		}
		printf("\n");
		i++;
	}
}
