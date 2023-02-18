/* Add two polynomials using Linked List. */

#include <stdio.h>
#include <stdlib.h>

struct node
{
	float coeffnt;
	int expont;
	struct node* link;
};

struct node* insert(struct node* head, float coeff, int expo)
{
	struct node* temp;
	struct node* newpoly = malloc(sizeof(struct node));
	
	newpoly->coeffnt = coeff;
	newpoly->expont = expo;
	newpoly->link = NULL;
	
	if(head == NULL || expo> head->expont)
	{
		newpoly->link = head;
		head = newpoly;
	}
	else
	{
		temp = head;
		while(temp->link != NULL && temp->link->expont >= expo)
		{
			temp = temp->link;
		}
		newpoly->link = temp->link;
		temp->link = newpoly;
	}
	return head;
}

struct node* create(struct node* head)
{
	int n,i;
	float coeffnt;
	int expont;
	
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the coefficient for term %d: ",i+1);
		scanf("%f",&coeffnt);
		
		printf("Enter the exponent for term %d: ",i+1);
		scanf("%d",&expont);
		
		head = insert(head, coeffnt, expont);
	}
	return head;
}

void display(struct node* head)
{
	if(head == NULL)
	{
		printf("No polynomial available..\n");
	}
	else
	{
		struct node* temp = head;
		while(temp!=NULL)
		{
			printf("(%.1fx^%d)",temp->coeffnt,temp->expont);
			temp = temp->link;
			if(temp!=NULL)
			{
				printf("+");
			}
			else
			{
				printf("\n");
			}
		}
	}
}

void poly_add(struct node* head1, struct node* head2)
{
	struct node* ptr1 = head1;
	struct node* ptr2 = head2;
	struct node* head3 = NULL;
	while(ptr1!=NULL && ptr2!=NULL)
	{
		if(ptr1->expont == ptr2->expont)
		{
			head3 = insert(head3, ptr1->coeffnt,ptr1->expont);
			ptr1 = ptr1->link;
			ptr2 = ptr2->link;
		}
		else if(ptr1->expont > ptr2->expont)
		{
			head3 = insert(head3, ptr1->coeffnt,ptr1->expont);
			ptr1 = ptr1->link;
		}
		else if(ptr1->expont < ptr2->expont)
		{
			head3 = insert(head3, ptr2->coeffnt,ptr2->expont);
			ptr2 = ptr2->link;
		}
		while(ptr1!=NULL)
		{
			head3 = insert(head3, ptr1->coeffnt,ptr1->expont);
			ptr1 = ptr1->link;
		}
		while(ptr2!=NULL)
		{
			head3 = insert(head3, ptr2->coeffnt,ptr2->expont);
			ptr2 = ptr2->link;
		}
		printf("The added polynomial is: ");
		display(head3);
	}
}

int main()
{
	struct node* head1 = NULL;
	struct node* head2 = NULL;
	printf("Enter the first polynomial\n");
	head1 = create(head1);
	printf("Enter the second polynomial\n");
	head2 = create(head2);
	
	poly_add(head1,head2);
	return 0;
}
