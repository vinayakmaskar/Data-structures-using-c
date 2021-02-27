#include <stdio.h>

#define MAX 100

int a[MAX];
int front = -1,rear = -1;

void enqueue();
void display();
void dequeue();
void peek();

void main()
{
    printf("Implementation of queue using array\n");
    int choice = 0;

    while (choice != 5)
    {
        printf("\n1.enqueue\n2.display\n3.dequeue\n4.peek\n5.Exit\n");
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
                printf("Exiting....\n");
                break;
            }
            default:
            {
                printf("Invalid choice\n");
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
        printf("Enter the data which has to be inserted\n");
    scanf("%d",&a[rear]);

        

    }
    else
    {
        rear++;
        printf("Enter the data which has to be inserted\n");
        scanf("%d",&a[rear]);
    }}
}

void display()
{
    int temp;
    temp = front;

    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }

   
        else{

        

        

        for (temp = front ; temp <= rear ; temp++)
        {
            printf("%d\t",a[temp]);
        }
    }}



void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty");

    }
    else
    {
        if (front > rear)
        {
            printf("Queue is empty\n");
            front = rear = -1;
        }
        else
        {
            printf("Deleted element is %d",a[front]);
            front++;
        }
    }


}

void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Peek element is %d",a[front]);
    }
}



