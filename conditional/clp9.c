//C Program to Check Uppercase or Lowercase or Digit or Special 
//Character
#include<stdio.h>
int main()
{
	char ch;
	printf("enter a character : ");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z'){
		printf("%c is upper case letter",ch);
	}else if(ch>='a' && ch<='z'){
		printf("%c is lower case letter",ch);
	}else if(0<=ch<=9){
		printf("%c is digit",ch);
	}else{
		printf("%c is special charcter",ch);
	}
}
