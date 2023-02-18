/* Code to implement a single Linked List data structure and its operations 
like insert and delete in the beginning/end and nth position of the 
list, and display the items stored in the linked list. */

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int no;
	struct node *next;
}*new, *first=0,*ptr, *temp;

void insertend();
void insertbegin();
void insertmiddle();

void deleteend();
void deletebegin();
void deletemiddle();

void createblock();
void display();

int count=0;

int main()
{
	int choice;
	L1 : printf("1:Insert in Beginning , 2:Insert at end , 3:Insert in middle , 4:Display, Any: Exit\n");
	printf("5:Delete in Beginning , 6:delete at end , 7:Delete in middle , 4:Display, Any: Exit\n");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			insertbegin();
			break;
		case 2:
			insertend();
			break;
		case 3:
			insertmiddle();
			break;
		case 4:
			display();
			break;
		case 5:
			deletebegin();
			break;
		case 6:
			deleteend();
			break;
		case 7:
			deletemiddle();
			break;
		default:
			printf("close program...\n");
			exit(EXIT_SUCCESS);
	}
	goto L1;
	return 0;	
}

void createblock()
{
	new = (struct node*)malloc(sizeof(struct node));
	printf("Enter the data: ");
	scanf("%d",&new->no);
	new->next=0;
	count++;
}

void insertend()
{
	createblock();
	
	if(first==0)
	{
		first=new;
	}
	else
	{
		for(ptr=first; ptr!=0; ptr=ptr->next);
		ptr->next=new;
	}
}

void insertbegin()
{
	createblock();
	
	if(first==0)
	{
		first = new;
	}
	else
	{
		new->next=first;
		first = new;
	}
	
}

void display()
{
	if(first==0)
	{
		printf("\nThe linked list is empty...\n");
	}
	else
	{
		printf("List %d elements: ", count);
		for(ptr=first;ptr!=0;ptr=ptr->next)
		{
			printf("%d ",ptr->no);
		}
		printf("\n");
	}
}

void insertmiddle()
{
	int pos;
	printf("Enter the position: ");
	scanf("%d ", &pos);
	
	if(pos<1)
	{
		printf("Wrong input..\n");
	}
	else if (pos>count+1)
	{
		printf("Wrong input..\n");
	}
	else if (pos==1)
	{
		insertbegin();
	}
	else
	{
		int i=1;
		for(ptr=first;i<pos-1;ptr=ptr->next,i++);
		
		if(ptr->next==0)
		{
			insertend();
		}
		else
		{
			createblock();
			
			//linking
			temp = ptr->next;
			ptr->next = new;
			new->next = temp;
		}
	}	
}

void deletebegin()
{
	//for empty linked list
	if(first==0)
	{
		printf("Linked list has no elements..\n");
	}
	//one element in the linked list
	else if(first->next==0)
	{
		printf("Data is deleted node: %d\n",first->no);
		free(first);
		first=0;
		count=0;
	}
	else
	{
		printf("Data is deleted node: %d\n",first->no);
		temp = first->next;
		free(first);
		first = temp;
		count = count-1;
	}
} 

void deleteend()
{
	//for empty linked list
	if(first==0)
	{
		printf("Linked list has no elements..\n");
	}
	//one element in the linked list
	else if(first->next==0)
	{
		printf("Data is deleted node: %d\n",first->no);
		free(first);
		first=0;
		count=0;
	}
	//more than one elements in the linked list
	else
	{
		for (ptr=first; ptr->next->next !=0; ptr=ptr->next);
		printf("Data is deleted node: %d\n",ptr->next->no);
		free(ptr->next);
		ptr->next=0;
		count = count-1;
	}
}

void  deletemiddle()
{
	int pos;
	printf("Enter the position: ");
	scanf("%d ", &pos);
	
	if(pos<1)
	{
		printf("wrong input...\n");
	}
	else if(pos>count)
	{
		printf("Wrong input...\n");
	}
	else if (pos==1)
	{
		deletebegin();
	}
	else if (pos==count)
	{
		deleteend();
	}
	else
	{
		int i=1;
		for(ptr=first;i<pos-1;ptr = ptr->next,i++);
		printf("Data is deleted node: %d\n",ptr->next->no);
		temp = ptr->next;
		ptr->next = ptr->next->next;
		free(temp);
		count = count - 1;
	}
}
