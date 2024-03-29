//WAP to reverse a string and check that the string is palindrome or not
#include<stdio.h>
int main(){
	char str[100];
	scanf("%s",&str);
	int length=strlen(str);
	int end = length-1;
	char rev[length];
	int i;
	for(i=0;i<=end;i++){
		rev[i]=str[length-1];
		length--;
	}/*for(i=0;i<=end;i++){
		if(str==rev){
		printf("\npalindrome");
	}else{
		printf("\nnot palindrome");
	}
	}*/
	
	int cmp=strcmp(str,rev);
	if(cmp==0){
		printf("\n%s is palindrome",str);
	}else{
		printf("\n%s is not palindrome",str);
	}
	
	}
