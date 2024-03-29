//ii. Vowel or Consonant using switch case 
#include<stdio.h>
int main(){
	char ch;
	printf("enter the character : ");
	scanf("%c",&ch);
	ch = tolower(ch);
	if(ch>='a' && ch<='z'){
	switch(ch){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("%c is vowel",ch);
			break;
		default :
			printf("%c is consonant",ch);
	    }
    }else{
    	printf("%c is not an alphabet",ch);
	}
}
