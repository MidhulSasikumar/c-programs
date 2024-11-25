#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int a;
	while(1)
	{
		srand(time(NULL));
		int random = (rand()%10)+1;
		int n;
		printf("\nEnter a number : ");
		scanf("%d",&n);
		printf("\ngenerated number : %d",random);
		if(random==n)
		{
			printf("\nYou won.....");
		}
		else
		{
			printf("\nSorry... You lost");
		}
		
		printf("\nDo you want to continue. \nIf yes please enter 1 or else enter any number: ");
		scanf("%d",&a);
		if(a==1)
		{
			printf("\ncontinuing");
		}
		else
		{
			break;
		}
	
	}
	return 0;
}
