#include <stdio.h>

#define MAX 100

int a[MAX];
int front = -1,rear = -1;
void enqueue();
void display();
void peek();
void dequeue();

void main()
{
    printf("Implementation of Queue using array\n");

    int choice = 0;

    while (choice != 5)
    {
        printf("\n1.enqueue\n2.display\n3.peek\n4.dequeue\n");
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
                peek();
                break;
            }
            case 4:
            {
                dequeue();
                break;
            }
            case 5:
            {
                printf("Exiting......\n");
                break;
            }
            default:
            {
                printf("Invalid condition\n");
            }
        };
    }
}

void enqueue()
{
    if (rear == MAX - 1 )
    {
        printf("Queue is full\n");

    }
    else{

        if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            printf("Enter the data\n");
            scanf("%d",&a[rear]);
        }

        else{

            rear++;
            printf("Enter the data\n");
            scanf("%d",&a[rear]);
        }
    }
}


void display()
{
    int temp;
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else{

        temp = front;
            for (temp = front ; temp <= rear ; temp++)
            {
                printf("%d\t",a[temp]);
            }
        }
    
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else{

        printf("Peek element is %d",a[front]);
    }
}

void dequeue()
{
    if (front == -1 && rear == -1 )
    {
        printf("Queue is empty\n");
    }

    else{

        if (front == rear)
        {
            printf("Deleted element is %d",a[front]);
            front = rear = -1;
        }

        else{
            printf("deleted element is %d",a[front]);
            front++;
        }
   
    }
}