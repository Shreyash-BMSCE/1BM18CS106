#include<stdio.h>
#include<stdlib.h>
#define Qsize 3

void enqueue(int *, int *, int *,int );
void dequeue(int *, int *, int *);
void display(int *, int *, int *, int *);

void main()
{
	int i,ch,val,queue[Qsize],r=-1,f=0,count=0;
	printf("\n :::CIRCULAR QUEUE:::\n");
	while(1)
	{
		printf("\n Enter the choice: \n 1. Enqueue \n 2.Dequeue \n 3. display \n 4.Exit \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("\n Enter the value:");
				    scanf("%d",&val);
                    enqueue(queue,&r,&count,val);
                    //display(queue, &f, &r, &count);
                    break;
            case 2: dequeue(queue, &f, &count);
            		//display(queue, &f, &r, &count);
            		break;
            case 3: display(queue, &f, &r, &count);
            		break;
            case 4: exit(0);
            		break;
            default: printf("\n Wrong input!!!");
        }
    }
}

void enqueue(int *q, int *r, int *count,int item)
{
	if(*count == Qsize)
	{
		printf("\nFULL\n");
	}
	else
	{
		(++(*r))%Qsize;
		q[*r] = item;
		(*count)++;
	}
}

void dequeue(int *q, int *f, int *count)
{
	if(*count == 0)
		printf("\nEmpty");
	else
	{
		printf("\n Element is deleted = %d",q[*f]);
		((*f)++)%Qsize;
		(*count)--;
	}
}
void display(int *q, int *f, int *r, int *count)
{
	int i,k;
	k=*f;
	if(*count == 0)
		printf("\n Circular Queue Empty!!! \n");
	for(i=0; i< *count;i++)
	{
		printf("%d -->",q[k]);
		((k)++)%Qsize;
	}
}
