#include<stdio.h>
int main(){
	int num,i=1,sum=0;
	printf("Enter the number :");
	scanf("%d",&num);
	while(i<=num){
		sum+=i;
		i++;
	}
	printf("Sum from 1 to %d = %d",num,sum);
	return 0;
}
