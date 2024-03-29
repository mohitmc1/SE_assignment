//4. Write a program in C to count the total number of words in a string
#include<stdio.h>
int main(){
	char str[100];
	printf("enter the string : ");
	gets(str);
	int i=0,word=1;
	while(str[i]!='\0'){
		if(str[i]==' '&&str[i+1]!=' '){
			word++;
		}
		i++;
	}
	printf("\nnumber of word : %d",word);
}
