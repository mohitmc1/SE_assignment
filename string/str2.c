//2. Write a program in C to separate individual characters from a string.
#include<stdio.h>
int main(){
	char str[100];
	printf("enter the word : ");
	scanf("%s",&str);
	int i;
	for(i=0;str[i]!='\0';i++){
		printf("\n%c",str[i]);
	}
}
