/*1. Write a program in C to find the length of a string without using library 
functions.*/
#include<stdio.h>
int main(){
	char str[100];
	printf("enter the word : ");
	scanf("%s",&str);
	int length=0;
	while(str[length]!='\0'){
		length++;
	}
	printf("\nlength : %d",length);
} 
