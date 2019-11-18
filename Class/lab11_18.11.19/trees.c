#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
typedef struct node *NODE;

NODE getNODE()
{
	NODE x;
	x=(NODE)malloc(sizeof(NODE));
	return x;
}

NODE create(NODE root,int item)
{
	if(root==NULL)
	{
		root=getNODE();
		root->data=item;
		root->left=NULL;
		root->right=NULL;
	}
	else
	{
		if(item<root->data)
		root->left=create(root->left,item);
		else
		root->right=create(root->right,item);
	}
	return root;
}

void inorder(NODE root)   //left->root->right  
{
	NODE r;
	r=root;
	if(r!=NULL)
	{
		inorder(r->left);
		printf("%d~~>",r->data);
		inorder(r->right);
	}
}

void preorder(NODE root)     //root left right
{
	NODE r;
	r=root;
	if(r!=NULL)
	{
		printf("%d~~>",r->data);
		preorder(r->left);
		preorder(r->right);
	}
}
void postorder(NODE root)   //left right root
{
	NODE r;
	r=root;
	if(r!=NULL)
	{
		postorder(r->left);
		postorder(r->right);
		printf("%d~~>",r->data);
	}
}
void main()
{
	NODE root=NULL;
	int i,item,n;
	while(1)
	{
		printf("\n1.creating a binary search tree 2.display in preoder 3.display in inorder 4.display in postorder 5.exit\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
			printf("Enter ZERO to END\n");
			printf("Enter data: ");
			scanf("%d",&item);
			while(item!=0)
			{
				root=create(root,item);
				printf("Enter data: ");
				scanf("%d",&item);
			}
			break;
			case 2:
				printf("Traversal in PREORDER:\n");
				preorder(root);
				break;
			case 3:
				printf("Traversal in INORDER:\n");
				inorder(root);
				break;
			case 4:
				printf("traversal in POSTORDER:\n");
				postorder(root);
				break;
			case 5:
				exit(0);
		}
	}
}
