#include<stdio.h>
int queue[5], front=-1,rear=-1;
void enqueue(){
	if((rear+1)%5==front){
		printf("Queue is full\n");
	}
	else if(rear==-1 && front==-1){
		front=0;
		rear=(rear+1)%5;
		printf("Enter the element :");
		scanf("%d",&queue[rear]);
	}
	
	else{
		rear=(rear+1)%5;
		printf("Enter the element :");
		scanf("%d",&queue[rear]);
	}
}
	
	

void dequeue(){
	if(front==-1){
		printf("Queue is empty\n");
	}
	else if(front==rear){
		front=-1;
		rear=-1;
		printf("Queue is empty");
	}
	else{
		front=(front+1)%5;
	}
}
void disp(){
	if(front==-1 && rear==-1){
		printf("Queue is empty\n");
	}
	else{
		int i;
		for(i=front;i!=rear;i=(i+1)%5){
			printf("%d\t",queue[i]);
		}
		printf("%d\n",queue[rear]);
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
