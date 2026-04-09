#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;

void enqueue(int);
void dequeue();
void show();

int main()
{
    int ch,x;
    
    while(1)
    {
     printf("\n---Queue implementation---");
     printf("\n1. Enqueue\n2. Dequeue\n3. Show\n4. Exit");
     printf("\nEnter you choice(1-4) : ");
     scanf("%d",&ch);
     
     switch(ch)
     {
        case 1  : printf("\nEnter Element to be inserted : ");
                  scanf("%d",&x);
                  enqueue(x);
                  break; 
        case 2  : dequeue();
                  break; 
        case 3  : show();
                  break; 
        case 4  : exit(0);
        default : printf("\nInvalid Choice!!");
     }
    }
    return 0;
}

void enqueue(int x)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    
    if(front==NULL)
      front=rear=newnode;
    else
    {  
        rear->next=newnode;
        rear=newnode;
    }
}

void dequeue()
{
    if(front==NULL)
      printf("\nQueue is Empty!!");
    else
    {  
      struct node *temp = front;
      front = front -> next;
      printf("\nDeleted element is %d",temp->data);
      free(temp);
    }
}

void show()
{
    
    if(front==NULL)
    { 
      printf("\nQueue is Empty!!");
    }  
    else
    {
      struct node *temp = front;
      while(temp->next!=NULL)  
      {
        printf("%d-->",temp->data);
        temp = temp -> next;
      }
      printf("%d-->NULL",temp->data);
    }
}
