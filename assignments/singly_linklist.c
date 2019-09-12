#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}node;

void find_mid(node *);

void main()
{
	int p1,i,ch1;
    int ch = 1;
	node *p,*q,*first;
	p = (node*)malloc(sizeof(node));
	p->data = p1;
	p->next = NULL;
	first = p;
	while(ch==1)
	{
		printf("\nEnter your choice");
		printf("\n 1. Insert Data");
		printf("\n 2. Display the middle element ");
		scanf("%d", &ch1);
		switch(ch1)
		{
			case 1 :printf("\nEnter the data:");
                    scanf("%d", &p1);
                    q = (node*)malloc(sizeof(node));
                    q->data = p1;
                    q->next = NULL;
                    p->next = q;
                    p = p->next;
                    break;		
			case 2 :find_mid(first);
			 	    break;
		}
        printf("\n Press 1 to Continue:");
        scanf("%d",&ch);
	}
}

void find_mid(node *first)
{
	node *temp = first;
	if(first != NULL)
	{
		if(first->next == NULL)
			{
				printf("\n--- Middle node is found to be --- \n --->>> %d", first->data);
			}
		else
		{
			while(first!=NULL && first->next!=NULL)
			{
				temp = temp->next;
				first = first->next->next;
			}
			printf("\n --- Middle node is found to be --- --->>> %d\n", temp->data);
		}
	}
    else
    {
        printf("\n Node EMPTY!!!!");
    }
    
}
