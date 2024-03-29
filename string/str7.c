//7. Write a program in C to copy one string to another string
#include<stdio.h>
int main(){
	char str1[100]="hello world";
	char str2[100];
	strcpy(str2,str1);
	printf("%s",str2);
}
