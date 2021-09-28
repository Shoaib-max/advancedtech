#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
	
};
void clisttraversal(struct node * head)
{
	struct node * ptr=head;
	while(ptr->next!=head)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
	printf("%d\n",ptr->data);
}
void clistt(struct node * head)
{
	struct node * ptr=head;
	do{
		printf("\n element  %d\n ",ptr->data);
		ptr=ptr->next;
	}while(ptr!=head);
}
struct node *insertatfirst(struct node *head,int data)
{
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	struct node *p=head;
	ptr->data=data;
	while(p->next!=head)
	{
		p=p->next;
	}
	p->next=ptr;
	ptr->next=head;
	head=ptr;
	return head;
}

int main()
{

	struct node *head;
	struct node *second;
	struct node *third;
			head=(struct node *)malloc(sizeof(struct node));
			second=(struct node *)malloc(sizeof(struct node));
			third=(struct node *)malloc(sizeof(struct node));
			head->data=7;
			head->next=second;
			second->data=11;
			second->next=third;
			third->data=13;
			third->next=head;
			//clisttraversal(head);
			clistt(head);
			head = insertatfirst(head,56);
			clistt(head);
			return 0;
}
