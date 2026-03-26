#include<stdlib.h>
#include <stdio.h>
void insert_beg();
void insert_end();
void display();
void delete_beg();
void delete_end();

struct node
{
    int data;
    struct node *right;
    struct node *left;
}*head = NULL,*temp1,*temp2;

int main()
{
    int ch;
    
    while(1)
    {
     printf("\n---Circular double Linked list MENU---");
     printf("\n1. Insert at beginning\n2. Insert at End\n3. Display\n4. Delete at beginning\n5. Delete at Ending\n6. Exit");
     printf("\nEnter your choice : ");
     scanf("%d",&ch);
     
     switch(ch)
     {
      case 1 : insert_beg();
               break;
      case 2 : insert_end();
               break;  
      case 3 : display();
               break;         
      case 4 : delete_beg();
               break; 
      case 5 : delete_end();
               break; 
      case 6 : exit(0);
               break;   
      default: printf("\nWrong choice!!!");         
     }
    }

    return 0;
}

void insert_beg()
{ 
    int num;
    temp1=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data : ");
    scanf("%d",&num);
    temp1->data=num;
    
    if(head==NULL)
    {
        temp1->right=temp1;
        temp1->left=temp1;
        head = temp1;
    }
    else
    {
        temp2=head->left;
        
        temp1->right=head;
        temp1->left=temp2;
        
        temp2->right=temp1;
        head->left=temp1;
        
        head=temp1;
    }
}

void insert_end()
{
    int num;
    temp1=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data : ");
    scanf("%d",&num);
    temp1->data=num;
    
     if(head==NULL)
    {
        temp1->right=temp1;
        temp1->left=temp1;
        head = temp1;
    }
    else
    {
        temp2=head->left;
        
        temp1->right=head;
        temp1->left=temp2;
        
        temp2->right=temp1;
        head->left=temp1;
    }
}

void display()
{
    if(head==NULL)
    {
        printf("\nList is empty!!");
        return;
    }
    
    temp1=head;
    printf("\nThe Circular Doubly Linked List is :\n");
    
    do{
        printf("%d<->",temp1->data);
        temp1=temp1->right;
    }
    while(temp1!=head);
}

void delete_beg()
{
    if(head==NULL)
    {
        printf("\nList is empty");
        return;
    }
    
    if(head->right==head)
    {
        printf("\nDeleted element is %d",head->data);
        free(head);
        head=NULL;
        return;
    }
    
    temp1=head;
    temp2=head->left;
    temp2->right=head;
    
    printf("\nDeleted element is %d",temp1->data);
    free(temp1);
}

void delete_end()
{
    if(head==NULL)
    {
        printf("\nList is empty!!");
        return;
    }
    
    if(head->right==head)
    {
        printf("\nDeleted element is %d",head->data);
        free(head);
        head=NULL;
        return;
    }
    
    temp1=head->left;
    temp2=temp1->left;
    temp2->right=head;
    head->left=temp2;
    
    printf("\nDeleted element is %d",temp1->data);
    free(temp1);
}
