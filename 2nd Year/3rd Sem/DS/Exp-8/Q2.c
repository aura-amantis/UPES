/* Code to store ‘n’ numbers in a Linked list. Perform a Linear search for a given number 
and report success or failure in the form of a suitable message. */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;           
    struct node *next; 
}*head;


void createList(int n);
void traverseList();
void searchList(int x);


int main()
{
    int n,x;

    printf("Enter the total number of nodes: ");
    scanf("%d", &n);

    createList(n);

    printf("\nThe list is as follows: \n");
    traverseList();
    
    searchList(x);
      return 0;
}

void createList(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));

    if(head == NULL)
    {
        printf("Unable to allocate memory.");
        exit(0);
    }


    printf("Enter the data of node 1: ");
    scanf("%d", &data);

    head->data = data; 
    head->next = NULL; 


    temp = head;
    for(i=2; i<=n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));

        if(newNode == NULL)
        {
            printf("Unable to allocate memory.");
            break;
        }

        printf("Enter the data of node %d: ", i);
        scanf("%d", &data);

        newNode->data = data; 
        newNode->next = NULL;  

        temp->next = newNode; 
        temp = temp->next;    
    }
}


void traverseList()
{
    struct node *temp;

    if(head == NULL)
    {
        printf("List is empty.");
        return;
    }
    
    temp = head;
    while(temp != NULL)
    {
        printf(" %d\n", temp->data);
        temp = temp->next;                
    }
}
void searchList(int x)
{
     struct node *ptr;  
    int item,i=0,flag;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search:");   
        scanf("%d",&item);  
        while (ptr!=NULL)  
        {  
            if(ptr->data == item)  
            {  
                printf("Item found at location %d ",i+1);  
                flag=0;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        if(flag==0)  
        {  
            printf("Item not found\n");  
        }  
    }     
}
