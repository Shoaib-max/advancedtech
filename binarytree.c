#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left,*right;
};
struct node *create(){
	int x;
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	printf("\n enter the data into tree");
	scanf("%d",&x);
	if(x==-1){
		return 0;
	}
	newnode->data=x;
	printf("\n enter the left data of %d node",x);
	newnode->left=create();
	printf("\n enter the right data of %d node",x);
	newnode->right=create();
}

int main(){
	struct node *root=0;
	root=create();
	return 0;
}
