#include<stdio.h>
int main(){
	int choice,num1,num2,result;
	printf("Enter two numbers :");
	scanf("%d%d",&num1,&num2);
	printf("Bitwise operator menu\n");
	printf("1.Bitwise AND(&)\n");
	printf("2.Bitwise OR(|)\n");
	printf("3.Bitwise XOR(^)\n");
	printf("4.Left Shift(<<)\n");
	printf("5.Right Shift(>>)\n");
	printf("6.Exit\n");
	do{
		printf("\n\nEnter your choice :");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				result = num1&num2;
				printf("Result = %d",result);
				break;
			case 2:
				result = num1|num2;
				printf("Result = %d",result);
				break;
			case 3:
				result = num1^num2;
				printf("Result = %d",result);
				break;
			case 4:
				result = num1<<num2;
				printf("Result = %d",result);
				break;
			case 5:
				result = num1>>num2;
				printf("Result = %d",result);
				break;
			case 6:
				printf("Exiting the program");
				break;
			default:
				printf("Invalid choice.....!");
				break;
		}
	}
	while(choice != 6);
	return 0;
}
