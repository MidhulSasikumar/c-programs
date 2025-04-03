#include<stdio.h>
int stac[5], top=-1;

void push(){
	if(top<4){
		top++;
		printf("Enter the element  :");
		scanf("%d",&stac[top]);
	}
	else{
		printf("Overflow\n");
	}
}
void pop(){
	if(top>-1){
		top--;
	}
	else{
		printf("Underflow\n");
	}
}
void disp(){
	int i;
	if(top>-1){
		for(i=0;i<=top;i++){
			printf("%d\t",stac[i]);
		}
		printf("\n");
	}
	else{
		printf("Underflow\n");
	}
	
}
int main()
{
    int choice;
    do {
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Disp\n");
        printf("4.Exit\n");
        printf("Enter your choice :");
        scanf("%d",&choice);
        switch (choice){
        	case 1:
        		push();
        		break;
        	case 2:
        		pop();
        		break;
        	case 3:
        		disp();
        		break;
        	case 4:
        		printf("Exiting.......!\n");
        		break;
        	default:
        		printf("Invalid choice.....!\n");
		}
    }
    while(choice!=4);
    return 0;
}
