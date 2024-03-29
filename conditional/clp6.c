//Find the Character Is Vowel or Not 
#include<stdio.h>
int main()
{
	char character;
	printf("enter a character : ");
	scanf("%c",&character);
	switch(character) {
		case('a') :
		printf("character is vowel");
		break;
		case('e') :
		printf("character is vowel");
		break;
		case('i') :
		printf("character is vowel");
		break;
		case('o') :
		printf("character is vowel");
		break;
		case('u') :
		printf("character is vowel");
		break;
		default :
		printf("character is not vowel");
		break;
	}
}
