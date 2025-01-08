#include<stdio.h>
int main(){
	int day;
	printf("Enter the number to check the day :");
	scanf("%d",&day);
	switch (day){
		case 1:
			printf("The day is Monday\n");
			break;
		case 2:
			printf("The day is Tuesday\n");
			break;
		case 3:
			printf("The day is Wednesday\n");
			break;
		case 4:
			printf("The day is Thursday\n");
			break;
		case 5:
			printf("The day is Friday\n");
			break;
		case 6:
			printf("Saturday\n");
			break;
		case 7:
			printf("Sunday\n");
			break;
		default:
			printf("Check the number again.Enter number between 1-7.");
			break;
	}
	return 0;
}
