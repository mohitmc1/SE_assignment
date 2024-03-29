//3. Write a program in C to print individual characters of a string in reverse order
#include<stdio.h>
int main(){
	char str[100];
	printf("enter the word : ");
	scanf("%s",&str);
	int i,length = strlen(str);
	while(length>=0){
		printf("\n%c",str[length]);
		length--;
	}
}
