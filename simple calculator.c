#include<stdio.h>
int main(){
	int choice;
	float num1,num2,result,memory;
	char a;
	printf("Simple Calculator\n");
	printf("1.Addition(+)\n");
	printf("2.Substraction(-)\n");
	printf("3.Multiplication(*)\n");
	printf("4.Division(/)\n");
	printf("5.Modulus(%)\n");
	printf("6.Memory store(MS)\n");
	printf("7.Memory recall(MR)\n");
	printf("8.Memory add(MS+)\n");
	printf("9.Exit\n");
	do{
		printf("Enter your choice :");
		scanf("%d",&choice);
		switch (choice){
			case 1:
				printf("\nEnter two numbers :");
				scanf("%f%f",&num1,&num2);
				result=num1+num2;
				printf("Result = %.2f\n",result);
				break;
			case 2:
				printf("\nEnter two numbers :");
				scanf("%f%f",&num1,&num2);
				result=num1-num2;
				printf("Result = %.2f\n",result);
				break;
			case 3:
				printf("\nEnter two numbers :");
				scanf("%f%f",&num1,&num2);
				result=num1*num2;
				printf("Result = %.2f\n",result);
				break;
			case 4:
				printf("\nEnter two numbers :");
				scanf("%f%f",&num1,&num2);
				if (num2==0)
					printf("Division by zero is not possible .");
				else{
					result=num1/num2;
					printf("Result = %.2f\n",result);
				}
				break;
			case 5:
				printf("\nEnter two numbers :");
				scanf("%f%f",&num1,&num2);
				if((int)num2==0)
					printf("Modulus by zero is not possible .");
				else{
					int result=(int)num1%(int)num2;
					printf("Result = %d\n",result);
				}
				break;
			case 6:
				memory = result;
				printf("Result %.2f is stored in Memory\n",memory);
				break;
			case 7:
				printf("Recalled from Memory  = %.2f\n",memory);
				break;
			case 8:
				memory += result;
				printf("Added Result to Memory . New Memory value = %.2f\n",memory);
				break;
			case 9:
				printf("Exiting.....!\n");
				break;
			default:
				printf("Invalid choice! Please try again.\n");
		}
	}	
	while(choice!=9);
	printf("Thank you for using calculator .");
	return 0;	
}
