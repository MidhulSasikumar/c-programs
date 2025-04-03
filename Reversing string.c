#include<stdio.h>
char stack[20];
int top=-1;

void push(char s){
	if(top<19){
		top++;
		stack[top]=s;
	}
}

void pop(){
	if(top>-1){
		printf("%c",stack[top]);
		top--;
	}
}

int main(){
	int i;
	char str[20];
	printf("Enter a string :");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++){
		push(str[i]);
	}
	while(stack[top]!=0){
		pop();
	}
	return 0;
}
