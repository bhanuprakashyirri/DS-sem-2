#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int queue[MAX];
int front=-1, rear=-1;

void insert(int);
void delete();
void display();

int main()
{
    int ch, val;
    
    while(1)
    {
        printf("\n---CIRCULAR QUEUES---");
        printf("\n1.Insert\n2.Delete\n3.display\n4.exit");
        printf("\nEnter your choice (1-4) : ");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1 : printf("\nEnter the value to insert : ");
                     scanf("%d",&val);
                     insert(val); 
                     break;
            case 2 : delete(); 
                     break;
            case 3 : display(); 
                     break;
            case 4 : exit(0); 
            default: printf("\nInvalid choice!!");
        }
    }
    return 0;
}

void insert(int val)
{
    if((rear + 1)%MAX==front)
    {
        printf("\nOverflow!!");
        return;
    }
    
    if(front==-1)
    {
        front=rear=0;
    }
    else
    {
        rear=(rear+1)%MAX;
    }
    
    queue[rear]=val;
    printf("\nValue %d inserted",&val);
}

void delete()
{
    if(front==-1)
    {
        printf("\nUnderflow!!");
        return;
    }
    
    printf("\nDeleted Element is %d",queue[front]);

    if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front=(front+1)%MAX;
    }
}
 
void display()
{
    if(front==-1)
    {
        printf("\nQueue is empty!!");
        return;
    }
    
    printf("\nQueue Elements : ");

    for(int i = front ;; i= (i+1)%MAX)
    {
        printf("%d->",queue[i]);
        if(i==rear)
          break;
    }
    printf("\n");
}
