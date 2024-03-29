/* Write a program in C to compare two strings without using string library 
functions.*/
#include<stdio.h>
int main(){
	char str1[100],str2[100];
	printf("enter string 1 : ");
	gets(str1);
	printf("enter string 2 : ");
	gets(str2);
	int i=0,f=0;
	while(str1[i] != '\0' && str2[i] != '\0'){
		if(str1[i] != str2[i]){
			f=1;
			break;
		}
		i++;
	}
	if(str1[i]=='\0'&&str2[i]=='\0'&&f == 0){
		printf("\nstring are same");
	}else{
		printf("\nstring are not same");
	}
}
