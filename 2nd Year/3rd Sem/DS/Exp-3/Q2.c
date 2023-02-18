/* Code to implement Stack and its operations like insert, delete, and display 
using a single linked list and functions */

#include <stdio.h>
#include <stdlib.h>

void push();
void pop();
void display();

struct node 
{
	int value;
	struct node *next;
};
struct node *head;

void main()
{
	int choose;
	L1: printf("1:Push into stack , 2:Pop out of stack , 3:Display the stack\n");
	printf("Enter the task to do with stack: ");
	scanf("%d",&choose);
	
	switch(choose)
	{
		case 1:
		{
			push();
			break;
		}	
		case 2:
		{
			pop();
			break;
		}
	    case 3:
		{
			display();
	    	break;
		}	
	    default:
	    {
	    	printf("Program closed...\n");
	    	exit(EXIT_SUCCESS);
		}
	    	
	};
	goto L1;
}

void push()
{
	int value;
	struct node *ptr = (struct node*)malloc(sizeof(struct node));
	
	if(ptr==NULL)
	{
		printf("Cannot push into stack..\n");
	}
	else
	{
		printf("Enter the value:");
		scanf("%d",&value);
		if(head == NULL)
		{
			ptr->value = value;
			ptr->next = NULL;
			head = ptr;
		}
		else
		{
			ptr->value = value;
			ptr->next =head;
			head = ptr;
		}
		printf("Value pushed successfully...\n");
	}	
}

void pop()
{
	int element;
	struct node *ptr;
	
	if(head==NULL)
	{
		printf("Stack is empty \nNo element of pop out...\n ");
	}
	else
	{
		element = head->value;
		ptr = head;
		head = head->next;
		free(ptr);
		printf("Last Element successfully popped/deleted from the stack...\n");
	}
}

void display()
{
	int i;
	struct node *ptr;
	ptr = head;
	if(ptr==NULL)
	{
		printf("The stack is empty.. Nothing to display...\n");
	}
	else
	{
		while(ptr!=0)
		{
			printf("%d\n",ptr->value);
			ptr = ptr->next;
		}
	}
}
