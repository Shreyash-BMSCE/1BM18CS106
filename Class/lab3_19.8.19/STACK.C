#include<stdio.h>
#include<conio.h>
#define MAX 20

struct stack
{
	int a[MAX];
	int top;
}s1;

void pop();
void push();
void disp();


void main()
{
	char ch='y';
	int ch1;
	s1.top=-1;
	clrscr();
	while(ch=='y'|| ch=='Y')
	{
		printf("\n Enter Choice: \n 1:Push \t 2:PoP \n");
		scanf("\n %d",&ch1);
		switch(ch1)
		{
			case 1: push();
				disp();
				break;
			case 2: pop();
				disp();
				break;
			default: printf("\n Wrong input!!!");
		}
		printf("\n Do you want to continue?? y/n");
		scanf("%s",&ch);
	}
	getch();
}

void push()
{
	if(s1.top==MAX-1)
	{
		printf("\n Overflow!!");
	}
	else
	{
		s1.a[++(s1.top)]=s1.top;
	}
}
void pop()
{
	if(s1.top==-1)
	{
		printf("\n Underflow!!");
	}
	else
	{
		s1.top--;
	}
}
void disp()
{
	int i;
	i=s1.top;
	printf("<--");
	while(i>=0)
	{
		printf("\n%d",s1.a[i]+1);
		i--;
	}
}









