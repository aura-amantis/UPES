/*Code to implement Circular Queue data structure and its operations like insert, delete,
and display using array and functions */

#include <stdio.h>
#include<stdlib.h>

void insert();
void delete();
void display();

int size;
int front = 0;
int rear = 0;
int count = 0;

int main()
{
    printf("Enter size: ");
    scanf("%d", &size);
    
    int queue[size];
    int choice;
    while(1)
    {
        printf("1. Insert element to queue\n");
        printf("2. Delete element from queue\n");
        printf("3. Display all elements of queue\n");
        printf("4. Quit\n");
        printf("Enter your choice\n");
        scanf("%d" , &choice);
        switch(choice)
        {
            case 1:
            insert(queue, size);
            break;
            
            case 2:
            delete(queue, size);
            break;
            
            case 3:
            display(queue);
            break;
            
            case 4:
            exit(1);
            
            default:
            printf("Wrong choice \n");
        }
    }
    return 0;
}

void insert(int *queue, int size)
{
    if(count == size)
        printf("Queue overflow \n");
    else
    {
        printf("Insert the element in queue: ");
        scanf("%d" , &queue[rear]);
        rear = (rear + 1)%size;
        count++;
    }
}

void delete(int *queue, int size)
{
    if(count==0)
    {
        printf("Queue underflow \n");
    }
    else
    {
        printf("Element deleted from queue is: %d\n" , queue[front]);
        front = (front + 1)%size;
        count--;
    }
}

void display(int *queue)
{
    if(count==0)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is: \n");
        for(int i = front ; i <= size - 1 ; i++)
            printf("%d ", queue[i]);
            printf("\n");
    }
}
