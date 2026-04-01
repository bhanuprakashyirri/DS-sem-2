#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *right;
	struct node *left;
}*head=NULL,*temp1,*temp2,*temp3;

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
		printf("\n\n---- Doubly Linked List(DLL) Menu ----");
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
		temp1->right=NULL;
		temp1->left=NULL;
		head=temp1;
	}
	else
	{	temp2=head;
		temp1->left=NULL;
		temp1->right=temp2;
		head=temp1;
		temp2->left=temp1;
	}
}

void insert_end()
{
	int num;
	temp1=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&num);
	temp1->data=num;
	if(head==NULL)       //If list is empty
	{
		head=temp1;
		temp1->left=NULL;
		temp1->right=NULL;
	}
	else {
		temp2=head;
		while(temp2->right!=NULL)
			temp2= temp2->right;
		temp2->right=temp1;
		temp1->left= temp2;
		temp1->right=NULL;
	}
}

int insert_pos()
{	int pos,i,num;
	if(head==NULL)
	{	printf("List is empty!!");
		return 0;
	}
	temp1=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&num);
	printf("Enter position to insert:");
	scanf("%d",&pos);
	temp1->data=num;
	temp2=head;
	for(i=1; i<=pos-1; i++) {
		if(temp2->right==NULL) {
			printf("There are less elements!!");
			return 0;
		}
		temp3= temp2;
		temp2= temp2->right;
	}
	temp3->right=temp1;
	temp1->right= temp2;
	temp1->left=temp3;
	temp2->left=temp1;
	return 0;
}

void display() {
	if(head==NULL) {
		printf("List is empty!!");
	}
	else {
		temp1=head;
		printf("The linked list is:\n");
		while(temp1!=NULL) {
			printf("%d->", temp1->data);
			temp1= temp1->right;
		}
	}
}

void delete_beg()  {
	if(head==NULL)
	{
		printf("The list is empty!!");
	}
	else {
		temp1=head;
		head=head->right;
		printf("Deleted element is %d",temp1->data);
		free(temp1);
		head->left=NULL;
	}
}

void delete_end()
{
	if(head==NULL)
	{
		printf("The list is empty!!");
	}
	else  {
		temp1=head;
		while(temp1->right->right!=NULL)
			temp1= temp1->right;
		temp2= temp1->right;
		temp1->right=NULL;
		printf("Deleted element is %d",temp2->data);
		free(temp2);
	}
}
int delete_pos()
{
	int pos,i;
	if(head==NULL) {
		printf("List is empty!!");
		return 0;
	}
	printf("Enter position to delete:");
	scanf("%d",&pos);
	temp2=head;
	for(i=1; i<=pos-1; i++) {
		if(temp2->right==NULL) {
			printf("There are less elements!!");
			return 0;
		}
		temp3= temp2;
		temp2= temp2->right;
	}
	temp1=temp2->right;
	temp3->right=temp1;
	temp1->left=temp3;
	printf("Deleted element is %d",temp2->data);
	free(temp2);
	return 0;
}
