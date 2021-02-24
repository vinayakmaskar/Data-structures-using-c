#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>


struct node 
{
    int data;
    struct node *next;
};

struct node *top = 0,*newnode,*temp;


void push();
void display();
void peek();
void pop();
void main()
{
   
     int choice;
     printf("*****performing stack using linked list*****\n");
     choice = 0;
     

     while (choice != 5)
     {
         printf("\nenter your choice ");
     printf("1.push\n2.pop\n3.display\n4.peek\n5.exit\n");
     scanf("%d",&choice);

     switch(choice)
     {
         case 1: 
         {
             push();
             break;
         }
         case 2:
         {
             pop();
             break;
         }
         case 3:
         {
             display();
             break;
         }
         case 4:
         {
             peek();
             break;
         }
         case 5:
         {
             printf("exiting......\n");
             break;
         }
         default :
         {
             printf("invalid choice\n");
         }
     };

     }
    
}

void push()
{
    
   
    
    
   
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data\n");
        scanf("%d",&newnode -> data);
        newnode -> next = top;
        top = newnode;

      


    

}

void display()
{
    printf("printing the elements in the stack\n");
    temp = top;

    if (top == 0)
    {
        printf("stack is empty\n");
    }
    while (temp != 0)
    {
        printf("%d\n",temp -> data);
        temp = temp -> next;
    }
    

}

void peek()
{
    temp = top;

    if (top == 0)
    {
        printf("stack is empty\n");
    }
    else
    printf("peek element is %d\n",temp -> data);

}

void pop()
{
    printf("performing pop operation\n");
    temp = top;

    top = top -> next;
    printf("popped element is %d\n",temp -> data);
    free(temp);
    

}
