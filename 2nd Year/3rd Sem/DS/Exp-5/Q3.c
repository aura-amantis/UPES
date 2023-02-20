/* Code to implement Double Ended Queue (Input Restricted Deque and Output Restricted 
Deque) and its operations (insert, delete, display) using linked list */

#include <stdio.h>
#include <stdlib.h>

struct queue
{
	int no;
	struct queue *next;
}*new,*first=0,*ptr,*temp;

int count =0;
void enq_begin();
void enq_end();
void deq_begin();
void deq_end();
void display();

void createblock()
{
	new = (struct queue *)malloc(sizeof(struct queue));
	printf("Enter the data: ");
	scanf("%d",&new->no);
	new->next=0;
	count++;
}

int main()
{
	int choice = 0; 
	while(1)
	{
		printf("1:Insert In Beginning of Queue\n2:Insert In the end of Queue\n3:Delete from the Beginning of Queue\n4:Delete from the End of Queue\n5:Display\nAny:Exit\n");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				enq_begin();
				break;
			case 2:
				enq_end();
				break;
			case 3:
				deq_begin();
				break;
			case 4:
				deq_end();
				break;
			case 5:
				display();
				break;
			default:
				printf("Program Closed...\n");
				exit(EXIT_SUCCESS);
		}
	}
}

void enq_begin()
{
	createblock();
	
	if (first==0) first=new;
	else
	{
		new->next = first;
		first = new;
	}
}

void enq_end()
{
	createblock();
	
	if(first==0) first=new;
	else
	{
		for(ptr=first;ptr->next!=0;ptr=ptr->next);
		ptr->next=new;
	}
}

void deq_begin()
{
	if(first==0) printf("The Queue is Empty...\n");
	else if(first->next==0)
	{
		printf("Deleted Element is: %d\n",first->no);
		free(first);
		first=0;
		count=0;
	}
	else
	{
		printf("Deleted Element is: %d\n",first->no);
		temp = first->next;
		free(first);
		first = temp;
		count -= 1;
	}
}

void deq_end()
{
	if(first==0) printf("The Queue is Empty...\n");
	else if(first->next==0)
	{
		printf("Deleted Element is: %d\n",first->no);
		free(first);
		first=0;
		count=0;
	}
	else
	{
		for (ptr=first; ptr->next->next !=0; ptr=ptr->next);
		printf("Deleted Element is: %d\n",ptr->next->no);
		free(ptr->next);
		ptr->next=0;
		count = count-1;
	}
}

void display()
{
	if(first==0) printf("The Queue is empty...\n");
	else
	{
		printf("The Elements are: ");
		for(ptr=first;ptr!=0;ptr=ptr->next)
			printf("%d ",ptr->no);
		printf("\n");
	}
}
