#include<stdio.h>
int main(){
	int num,items,i=1,sum=0;
	printf("Enter how many numbers to add :");
	scanf("%d",&items);
	while(i<=items){
		printf("Enter the number %d :",i);
		scanf("%d",&num);
		sum+=num;
		i++;
	}
	printf("Sum = %d",sum);
	return 0;
}
