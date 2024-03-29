//WAP to find reverse of string using recursion
#include<stdio.h>
void reverseString(char str[],int start,int end){
	if(start>=end){
		return;
	}
	char temp=str[start];
	str[start]=str[end];
	str[end]=temp;
	reverseString(str,start+1,end-1);
}
int main(){
	char str[100];
	printf("enter the word : ");
	scanf("%s",str);
	int len = strlen(str);
	reverseString(str,0,len-1);
	printf("reverse string : %s",str);
}
