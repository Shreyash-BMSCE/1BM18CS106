#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 5
void aprocess(int *,int *);
void dprocess(int *,int *, int *);
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
		printf("\n Enter choice: \n 1.New Process 2.Complete a Process 3.Display Remaining Processes \t");
		scanf("%d",&ch1);
		switch(ch1)
		{
			case 1: aprocess(queue,&r);
				break;
			case 2: dprocess(queue,&r,&f);
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
void aprocess(int a[],int *r)
{
		if(*r==MAX-1)
		{
			printf("\n Queue is empty!!");
		}
		else
		{
				int val;
				printf("\n Enter the process number:");
				scanf("%d",&val);
				++(*r);
				a[*r]=val;
		}
}
void dprocess(int a[],int *r,int *f)
{
		if(*f>*r)
		{
				printf("Reached End!! cannot Insert more Processes!!");
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
				printf("\n No Process!!!");
		}
		else
		{
				int i;
				printf("-->");
				for(i=*f;i<=*r;i++)
				{
						printf("\t Process %d",a[i]);
				}
		}
}
