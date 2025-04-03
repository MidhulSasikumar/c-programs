#include<stdio.h>
int queue[5], front=0,rear=-1;
void enqueue(){
	if(rear<4){
		rear++;
		printf("Enter the element :");
		scanf("%d",&queue[rear]);
	}
	else{
		printf("Queue is full\n");
	}
}
void dequeue(){
	if(front<=rear){
		front++;
	}
	else{
		printf("Queue is empty\n");
	}
}
void disp(){
	if(front<=rear){
		int i;
		for(i=front;i<=rear;i++){
			printf("%d\t",queue[i]);
		}
		printf("\n");
	}
	else{
		printf("Queue is empty\n");
	}
}

int main()
{
    int choice;
    do {
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Disp\n");
        printf("4.Exit\n");
        printf("Enter your choice :");
        scanf("%d",&choice);
        switch (choice){
        	case 1:
        		enqueue();
        		break;
        	case 2:
        		dequeue();
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
