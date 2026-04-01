// Circular Single linked list
#include<stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head=NULL,*temp1,*temp2;
int main()
{
	int ch;
	void insert_beg();
	void insert_end();
	int insert_pos();
	void display();
	void delete_beg();
	void delete_end();
	int delete_pos();
	while(1)
	{
		printf("\n\n---- Singly Linked List(SLL) Menu ----");
		printf("\n1.Insert\n2.Display\n3.Delete\n4.Exit\n\n");
		printf("Enter your choice(1-4):");
		scanf("%d",&ch);

		switch(ch)
		{
		case 1:
			printf("\n---- Insert Menu ----");
			printf("\n1.Insert at beginning\n2.Insert at end\n3.Insert at specified position\n4.Exit");
			printf("\n\nEnter your choice(1-4):");
			scanf("%d",&ch);
			switch(ch)
			{
			case 1:
				insert_beg();
				break;
			case 2:
				insert_end();
				break;
			case 3:
				insert_pos();
				break;
			case 4:
				exit(0);
			default:
				printf("Wrong Choice!!");
			}
			break;
		case 2:
			display();
			break;
		case 3:
			printf("\n---- Delete Menu ----");
			printf("\n1.Delete from beginning\n2.Delete from end\n3.Delete from specified position\n4.Exit");
			printf("\n\nEnter your choice(1-4):");
			scanf("%d",&ch);
			switch(ch)
			{
			case 1:
				delete_beg();
				break;
			case 2:
				delete_end();
				break;
			case 3:
				delete_pos();
				break;
			case 4:
				exit(0);
			default:
				printf("Wrong Choice!!");
			}
			break;
		case 4:
			exit(0);
		default:
			printf("Wrong Choice!!");
		}
	}
}

void insert_beg()
{
	int num;
	temp1=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&num);
	temp1->data=num;
	if(head==NULL)        //If list is empty
	{
		head=temp1;
		temp1->next=head;
	}
	else
	{
		temp1->next=head;
		temp2=head;
		while(temp2->next != head)
			temp2=temp2->next;
		temp2->next=temp1;
		head=temp1;
	}
}

void insert_end()
{
	int num;
	temp1=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&num);
	temp1->data=num;
	temp1->next=head;

	if(head==NULL)        //If list is empty
	{
		head=temp1;
		head->next = head;
	}
	else
	{
		temp2=head;
		while(temp2->next!=head)
			temp2= temp2->next;
		temp2->next=temp1;
	}
}

int insert_pos()
{
	int pos,i,num;
	if(head==NULL)
	{
		printf("List is empty!!");
		return 0;
	}
	temp1=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&num);
	printf("Enter position to insert:");
	scanf("%d",&pos);
	temp1->data=num;
	temp2=head;
	for(i=1; i<pos-1; i++)
	{
		if(temp2->next==NULL)
		{
			printf("There are less elements!!");
			return 0;
		}
		temp2= temp2->next;
	}
	temp1->next= temp2->next;
	temp2->next=temp1;
	return 0;
}

void display()
{
	if(head==NULL)
		printf("List is empty!!");
	else
	{
		temp1=head;
		printf("The linked list is:\n");
		do
		{
			printf("%d->",temp1->data);
			temp1=temp1->next;
		} while(temp1!=head);
	}
}

void delete_beg()
{
	if(head == NULL)
		printf("The list is empty!!\n");

	if(head->next == head)
	{
		printf("Deleted element is %d\n", head->data);
		free(head);
		head = NULL;
		return;
	}
	temp1 = head;
	temp2 = head;
	while(temp2->next != head)
		temp2 = temp2->next;
	head = head->next;
	temp2->next = head;
	printf("Deleted element is %d\n", temp1->data);
	free(temp1);
}

void delete_end()
{
	if(head == NULL)
	{
		printf("The list is empty!!\n");
		return;
	}

	if(head->next == head)
	{
		printf("Deleted element is %d\n", head->data);
		free(head);
		head = NULL;
		return;
	}
	temp1 = head;
	temp2 = head;

	while(temp1->next != head)
	{
		temp2 = temp1;
		temp1 = temp1->next;
	}
	temp2->next = head;
	printf("Deleted element is %d\n", temp1->data);
	free(temp1);
}

int delete_pos()
{
	int pos,i;
	if(head==NULL)
	{
		printf("List is empty!!");
		return 0;
	}
	printf("Enter position to delete:");
	scanf("%d",&pos);
	temp2=head;
	for(i=1; i<pos-1; i++)
	{
		if(temp2->next==NULL)
		{
			printf("There are less elements!!");
			return 0;
		}
		temp2=temp2->next;
	}
	temp1=temp2->next;
	temp2->next=temp1->next;
	printf("Deleted element is %d",temp1->data);
	free(temp1);
	return 0;
}
