#include <stdio.h>


#define MAX 100
int a[MAX];
int top = -1;
int temp;
void push();
void peek();
void display();
void pop();
void main()
{
    int choice = 0;
    printf("Implementation of stack using array\n");
    
   


    while (choice != 5)
    {
         printf("1.push\n2.pop\n3.display\n4.peek\n5.exit\n");
    printf("enter your choice  ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1: 
    {   push();
        break;}
        case 2: {
            pop();
            break;
        }
        case 3: {
            display();
            break;
        }
        case 4: {
            peek();
            break;
        }
        case 5:
        {
            printf("exiting......\n");
            break;
        }
    
    default:
    {printf("Invalid choice\n");
        break;}
    };
        
    }

}

void push()
{
    int data;
    if (top == MAX-1)
    {
        printf("Overflow condition\n");
    }
    else{
        top++;
        printf("enter the data\n");
        scanf("%d",&data);
        a[top] = data;

    }

}

void display()
{
    temp = top;

    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else{

    for (temp = top ; temp >= 0 ; temp--)
    {
        printf("%d\n",a[temp]);
    }
    }

}

void peek()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else{
        printf("peek element is %d\n",a[top]);
    }

}

void pop()
{
    if (top == -1)
    {
        printf("stack is empty\n");
    }
    else
    {
        temp = top;
        printf("Popped element is %d\n",a[temp]);
        top = top - 1;

    }

}
