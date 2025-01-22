#include<stdio.h>
int main(){
	int num,i=1;
	printf("Enter the number :");
	scanf("%d",&num);
	while(i<=10){
		printf("%d x %d = %d\n",i,num,i*num);
		i++;
	}
	return 0;
}
