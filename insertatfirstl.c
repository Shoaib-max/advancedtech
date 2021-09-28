#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
	
};
void linkedlisttraversal(struct node *ptr)
{
	while(ptr!=NULL)
	{
		printf("element : %d\n",ptr->data);
		ptr=ptr->next;
	}
}
struct node * insertatfirst(struct node *head,int data)
{
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	ptr->next=head;
	ptr->data=data;
	return ptr;
}
struct node * insertatend(struct node *head,int data)
{
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
ptr->data=data;
struct node * p =head;
while(p->next!=NULL)
{
	p=p->next;
	}	
	ptr->next=NULL;
		p->next=ptr;

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
			third->next=NULL;
			linkedlisttraversal(head);
		head=insertatfirst(head,35);
	//	linkedlisttraversal(head);
       // head = insertatend(head,35);
		linkedlisttraversal(head);
			return 0;
}
