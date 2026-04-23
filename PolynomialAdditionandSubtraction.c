#include<stdio.h>
#include<stdlib.h>

struct node {
	int coef,expo;
	struct node *next;
};
struct node *head1=NULL,*head2=NULL;

struct node *create()
{
	struct node *head=NULL,*temp,*newnode;
	int ch;

	do {
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("\nEnter coefficient and exponent : ");
		scanf("%d %d",&newnode->coef,&newnode->expo);
		newnode->next=NULL;

		if(head==NULL)
			head=temp=newnode;
		else
			temp->next=newnode;
		temp=newnode;

		printf("\nAdd another term? (1-Yes / 0-No) : ");
		scanf("%d",&ch);
	} while(ch==1);

	return head;
}

void display(struct node *head)
{
	struct node *temp = head;

	while(temp!=NULL)
	{
		printf("%dx^%d",temp->coef,temp->expo);
		temp=temp->next;

		if(temp!=NULL)
			printf(" + ");
	}
	printf("\n");
}

void add(struct node *p1, struct node *p2)
{
	printf("\nAddition : ");

	while(p1!=NULL && p2!=NULL)
	{
		if(p1->expo==p2->expo)
		{
			printf("%dx^%d",p1->coef + p2->coef,p1->expo);
			p1=p1->next;
			p2=p2->next;
		}
		else if(p1->expo > p2->expo)
		{
			printf("%dx^%d",p1->coef,p1->expo);
			p1=p1->next;
		}
		else
		{
			printf("%dx^%d",p2->coef,p2->expo);
			p1=p1->next;
		}

		if(p1!=NULL && p2!=NULL)
		{
			printf(" + ");
		}
	}

	while(p1!=NULL)
	{
		printf("%dx^%d",p1->coef,p1->expo);
		p1=p1->next;
		if(p1!=NULL)
			printf(" + ");
	}

	while(p2!=NULL)
	{
		printf("%dx^%d",p2->coef,p2->expo);
		p2=p2->next;
		if(p2!=NULL)
			printf(" + ");
	}
}

void sub(struct node *p1, struct node *p2)
{
	printf("\nSubtraction : ");

	while(p1!=NULL && p2!=NULL)
	{
		if(p1->expo==p2->expo)
		{
			printf("%dx^%d",p1->coef - p2->coef,p1->expo);
			p1=p1->next;
			p2=p2->next;
		}
		else if(p1->expo > p2->expo)
		{
			printf("%dx^%d",p1->coef,p1->expo);
			p1=p1->next;
		}
		else
		{
			printf("%dx^%d",p2->coef,p2->expo);
			p1=p1->next;
		}

		if(p1!=NULL && p2!=NULL)
		{
			printf(" + ");
		}
	}
}

int main()
{
	printf("\nEnter first polynomial :\n");
	head1=create();

	printf("\nEnter second polynomial :\n");
	head2=create();

	printf("\nFirst polynomial :\n");
	display(head1);

	printf("\nSecond polynomial :\n");
	display(head2);

	add(head1,head2);
	sub(head1,head2);

	return 0;
}
