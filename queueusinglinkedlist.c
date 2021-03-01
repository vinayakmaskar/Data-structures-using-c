#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <conio.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *front = 0,*rear= 0,*newnode;
struct node *temp;

void enqueue();
void display();
void dequeue();
void peek();

void main()
{
    printf("Implementation of Queue using Linked list\n");

    int choice = 0;

    while (choice != 5)
    {
        printf("\n1.insert\n2.display\n3.delete\n4.peek\n5.exit\n");
        printf("Enter your choice  ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                enqueue();
                break;
            }
            case 2:
            {
                display();
                break;
            }
            case 3:
            {
                dequeue();
                break;

            }
            case 4:
            {
                peek();
                break;
            }
            case 5:
            {
                printf("Exiting.....\n");
                break;
            }
            default :
            {
                printf("Invalid condition\n");
            }
        };
    }
}

void enqueue()
{
    if (front == 0 && rear == 0)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data  ");
        scanf("%d",&newnode -> data);
        newnode -> next = 0;
        front = rear = newnode;

    }

    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data ");
        scanf("%d",&newnode -> data);
        newnode -> next = 0;
        rear -> next = newnode;
        rear = newnode;
    }
}


void display()
{
    temp = front;
    
    if (front == 0 && rear == 0)
    {
        printf("Queue is empty\n");
    }
    else
    {
        
        while (temp != 0)
        {
            printf("%d\t",temp -> data);
            temp = temp -> next;
        }

    }
}

void dequeue()
{
    temp = front;
    if  (front == 0 && rear == 0)
    {
        printf("Queue is empty\n");
    }

    else
    {
        if (front == rear)
        {

        printf("Deleted element is %d",front -> data);
        front = rear = 0;
        free(temp);}

        else
        {
            printf("Deleted element is %d",front -> data);
            front = front -> next;
            free(temp);
        }

    }
}

void peek()
{
    if (front == 0 && rear == 0)
    {
        printf("Queue is empty\n");

    }

    else
    {
        printf("Peek element is %d",front -> data);
    }
}