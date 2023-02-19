/* Code to implement Stack and its operations like insert , delete , and display using array and functions */

#include <stdio.h>
void push();
void pop();
void display();
int stack[100];
int TOP = -1;
int main()
{
    int choice , n;
    while(1)
    {
        printf("Enter the choice\n");
        printf("1. push\n2. pop\n3. display\n4. exit\n");
        scanf("%d" , &choice);
        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(1);
            default:
                printf("wrong Choice\n");
        }
    }
}
void push()
{
    int n;
    if (TOP >= 100 - 1)
    printf("Stack overflow\n");
    else
    {
        TOP = TOP + 1;
        printf("Enter the number to be push\n");
        scanf("%d" , &n);
        stack[TOP] = n;
    }
}
void pop()
{
    if(TOP == -1)
    printf("Stack is underflow\n");
    else
    TOP = TOP - 1;
}
void display()
{
    int i = TOP;
    if(TOP == -1)
    printf("Stack is underflow\n");
    else
    {
        while(i >= 0)
        {
            printf("%d\n" , stack[i]);
            i--;
        }
    }
}
