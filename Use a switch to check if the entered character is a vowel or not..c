#include<stdio.h>
int main(){
	char ch;
	printf("Enter a character :");
	scanf("%c",&ch);
	switch(ch)
	{
		case'a':
		case'e':
		case'i':
		case'o':
		case'u':
		case'A':
		case'E':
		case'I':
		case'O':
		case'U':
			printf("%c is a vowel character.",ch);
			break;
		default:
			printf("%c is not a vowel character.",ch);
			break;
	}
	return 0;
}
