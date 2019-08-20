#include<stdio.h>
#include<conio.h>
#define MAX 20

void pop(int *);
void push(int *,int *);
void disp(int *,int *);


void main()
{
	char ch='y';
	int ch1;
	int top=-1;
	int a[MAX];
	clrscr();
	while(ch=='y'|| ch=='Y')
	{
		printf("\n Enter Choice: \n 1:Push \t 2:PoP \n");
		scanf("\n %d",&ch1);
		switch(ch1)
		{
			case 1: push(a,&top);
				disp(a,&top);
				break;
			case 2: pop(&top);
				disp(a,&top);
				break;
			default: printf("\n Wrong input!!!");
		}
		printf("\n Do you want to continue?? y/n");
		scanf("%s",&ch);
	}
	getch();
}

void push(int a[],int *top)
{
	if(*top==MAX-1)
	{
		printf("\n Overflow!!");
	}
	else
	{
		a[++(*top)]=*top;
	}
}
void pop(int *top)
{
	if(*top==-1)
	{
		printf("\n Underflow!!");
	}
	else
	{
		(*top)--;
	}
}
void disp(int a[],int *top)
{
	int i;
	i=*top;
	printf("<--");
	while(i>=0)
	{
		printf("\n%d",a[i]+1);
		i--;
	}
}
