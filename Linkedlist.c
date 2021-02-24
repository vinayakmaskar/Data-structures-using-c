#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = 0,*newnode,*temp,*pretemp;


void create();
void display();
void insertbeg();
void insertend();
void insertbefore();
void insertafter();
void deletebeg();
void deleteend();
void deletespecific();
void deletebefore();
void deleteafter();

void main()
{
    printf("Creating linked list and performing its operations\n");

    int choice = 0;
    while (choice != 12)
    {
        printf("\n1.create linked list\n2.display\n3.insertbeg\n4.insertend\n5.insertbefore\n6.insertafter\n7.deletebeg\n8.delete end\n9.delete specific element\n10.deletebefore\n11.deleteafter\n");
        printf("enter your choice  ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                create();
                break;
            }
            case 2:
            {
                display();
                break;
            }
            case 3:
            {
                insertbeg();
                break;
            }
            case 4:
            {
                insertend();
                break;
            }
            case 5:
            {
                insertbefore();
                break;
            }
            case 6:
            {
                insertafter();
                break;
            }
            case 7:
            {
                deletebeg();
                break;
            }
            case 8:
            {
                deleteend();
                break;
            }
            case 9:
            {
                deletespecific();
                break;
            }
            case 10:
            {
                deletebefore();
                break;
            }
            case 11:
            {
                deleteafter();
                break;
            }
        };
    }
}

void create()
{
    int data;
    printf("creating linked list\n");
    int choice = 1;

    while (choice == 1)
    {
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data\n");
    scanf("%d",&newnode -> data);
    newnode -> next = 0;

    if (head == 0)
    {
        head = temp = newnode;
    }
    else
    {
        temp -> next = newnode;
        temp = newnode;
    }
    printf("Enter 1 to continue or Enter 0 to exit\n");
    scanf("%d",&choice);
    }
}

void display()
{
    temp = head;

    while (temp != 0)
    {
        printf("%d\t",temp -> data);
        temp = temp -> next;
    }
}

void insertbeg()
{
    temp = head;
    int data;

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&newnode -> data);

    newnode -> next = temp;
    head = temp = newnode;
    printf("\nData inserted in the begining\n");
}

void insertend()
{
    temp = head;

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&newnode -> data);

    while (temp -> next != 0)
    {
        temp = temp -> next;
    }

    temp -> next = newnode;
    newnode -> next = 0;
    printf("\nData inserted at the end\n");
}


void insertbefore()
{
    temp = head;
    int a;
    printf("Enter the element before which the data has to be inserted\n");
    scanf("%d",&a);

   if (temp -> data == a)
    {
        insertbeg();
        printf("Data inserted successfully\n");
    }

else{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&newnode -> data);

     


    while (temp -> data != a)
    {
        pretemp = temp;
        temp = temp -> next;
    }

    pretemp -> next = newnode;
    newnode -> next = temp;

    printf("Data inserted successfully\n");}

}


void insertafter()
{
    temp = head;
    pretemp = temp;
    int a;
    printf("Enter the element after which the data has to be inserted\n");
    scanf("%d",&a);

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&newnode -> data);

    while (pretemp -> data != a)
    {
        pretemp = temp;
        temp = temp -> next;
    }

    pretemp -> next = newnode;
    newnode -> next = temp;

    printf("Data inserted successfully\n");

}

void deletebeg()
{
    temp = head;

    head = head -> next;
    free(temp);
    printf("Data deleted successfully\n");
}

void deleteend()
{
    temp = head;
    pretemp = temp;

    while (temp -> next != 0)
    {
        pretemp = temp;
        temp = temp -> next;
    }

    free(temp);
    pretemp -> next = 0;
    printf("Data deleted successfully\n");

}

void deletespecific()
{
    temp = head;
    int a;

    printf("Enter the data which has to be deleted\n");
    scanf("%d",&a);

    if (temp -> data == a)
    {
        deletebeg();
    }

    else
    {

    

   
    while (temp -> data != a)
    {
        pretemp = temp;
        temp = temp -> next;
    }

    pretemp -> next = temp -> next;
    free(temp);
    printf("Data deleted successfully\n");}

}

void deletebefore()
{
    temp = head;
    int a;
    printf("Enter the element before which the data has to be deleted\n");
    scanf("%d",&a);

    if (temp -> next -> data == a)
    {
        deletebeg();
    }
    else{

    while (temp -> next -> data != a)
    {
        pretemp = temp; 
        temp = temp -> next;
    }
    pretemp -> next = temp -> next;
    free(temp);

    printf("Data deleted successfully\n");}
}

void deleteafter()
{
    temp = head;
    pretemp = temp;
    int a;
    printf("Enter the element after which the data has to be deleted\n");
    scanf("%d",&a);

    

    while (pretemp -> data != a)
    {
        pretemp = temp;
        temp = temp -> next;
    }

    pretemp -> next = temp -> next;
    free(temp);

    printf("Data deleted successfully...\n");

}

