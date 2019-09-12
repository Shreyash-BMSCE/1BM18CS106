#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *link;
}node;

void find_mid(node *,int);

void main()
{
	int p1,c=0,i,ch1;
    int ch = 1;
	node *p,*q,*first;
	p = (node*)malloc(sizeof(node));
	p->data = p1;
	p->link = NULL;
	first = p;
	while(1)
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
                    q->link = NULL;
                    p->link = q;
                    p = p->link;
                    c++;
                    break;		
			case 2 :find_mid(first,c);
			 	    break;
		}
       // printf("\n Press 1 to Continue:");
      //  scanf("%d",&ch);
	}
}

void find_mid(node *first,int c)
{
	node *temp = first;
	if(first != NULL)
	{
		if(first->link == NULL)
			{
				printf("\n--- Middle node is found to be --- \n --->>> %d", first->data);
			}
		else
		{
            printf("\n%d",c);
            c=c/2 + 1;
            while(c!=0)
            {
                temp = temp -> link;
                c--;
            }
			printf("\n --- Middle node is found to be --- --->>> %d\n", temp->data);
		}
	}
    else
    {
        printf("\n Node EMPTY!!!!");
    }
    
}
