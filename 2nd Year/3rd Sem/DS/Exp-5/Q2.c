/* Code to implement Priority Queue and its operations (insert, delete, display) using array and functions */

#include<stdio.h>
#include<stdlib.h>
int count = 0;

struct node
{
    int data;
    int priority;
};

void insert(struct node*a , int size);
void delete(struct node*a);
void display(struct node*a);

int main()
{
    int choice , size;
    printf("Enter size of array: ");
    scanf("%d" , &size);
    struct node a[size];                 
    while(1)
    {
        printf("1:Insert, 2:Delete, 3:Display, 4:Exit.\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: insert(a, size); 
            break;
            case 2: delete(a);
            break;
            case 3: display(a);
            break;
            default:
            printf("Program Closed.\n");
            exit(0);
        }
        
    }
    return 0;
}
void insert(struct node*a, int size)
{
    if(count == size) 
    printf("Array full.\n");
    else
    {
        int temp;
        struct node x;
        printf("Enter priority and data: ");
        scanf("%d%d", &x.priority, &x.data);
        if(count == 0)
        {
            a[0] = x;
            count++;
        }
        else
        {
            count++;
            int i;
            for(i = 0; i<count-1; i++)
            {
                if(a[i].priority > x.priority)
                {
                    for(int j = count-1; j>i; j--)
                        a[j] = a[j-1];
                    a[i] = x;
                    break;
                }
                else continue;                  //a[i].priority <= x.priority
            }
            //(executed after continue)
            if(i==count-1) a[i]= x;
        }
    }
}

void delete(struct node*a)
{
    if(count == 0)
    printf("Array empty.\n");
    else
    {
        for(int i = 0; i<count-1; i++)
            a[i] = a[i+1];
        count--;
    }
}

void display(struct node *a)
{
    if(count == 0)
    printf("Array empty.\n");
    else
    {
        printf("Array has: ");
        for(int i = 0; i<count; i++)
            printf("%d:%d ", a[i].priority, a[i].data);
        printf("\n");
    }
}
