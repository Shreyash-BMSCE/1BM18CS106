#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 5
void enqueue(int *,int *);
void dequeue(int *,int *, int *);
void disp(int *, int *,int *);

void main()
{
	int queue[MAX];
	int r=-1,f=0;
	int ch1;
	char ch;
	clrscr();
	do
	{
		printf("\n Enter choice: \n 1.Enqueue 2.DeQueue 3.Display \t");
		scanf("%d",&ch1);
		switch(ch1)
		{
			case 1: enqueue(queue,&r);
				break;
			case 2: dequeue(queue,&r,&f);
				break;
			case 3: disp(queue,&r,&f);
				break;
			default: printf("\n Wrong Input!!!");
		}
		printf("\n Do you want to continue?? y/n:");
		scanf("%s",&ch);
	}while(ch=='y'||ch=='Y');
	getch();
}
void enqueue(int a[],int *r)
{
		if(*r==MAX-1)
		{
			printf("\n Queue is empty!!");
		}
		else
		{
				int val;
				printf("\n Enter the value:");
				scanf("%d",&val);
				++(*r);
				a[*r]=val;
		}
}
void dequeue(int a[],int *r,int *f)
{
		if(*f>*r)
		{
				printf("Reached End!! cannot Insert!!");
				exit(0);
		}
		else
		{
				a[*f]=0;
				(*f)++;
		}
}			
void disp(int a[],int *r,int *f)
{
		if(*f>MAX-1)
		{
				printf("\n Queue Empty!!!");
		}
		else
		{
				int i;
				printf("-->");
				for(i=*f;i<=*r;i++)
				{
						printf("\t %d",a[i]);
				}
		}
}
