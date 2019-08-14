#include<stdio.h>
#include<conio.h>
#define MAX 20

void push();
void pop();
void check();

struct cub
{
	int cb[MAX];
	int ts_top;
}s;

void main()
{
	int ch2;
	char ch1='y';
	s.ts_top = -1;
	clrscr();
	while(ch1=='y'||ch1=='Y')
	{
		printf("\n Enter choice: 1.Insert tshirt, 2.Remove tshirt, 3.Check cuboard:\n");
		scanf("%d",&ch2);
		if(ch2==1)
		{
			push();
			check();
		}
		else if(ch2==2)
		{
			pop();
			check();
		}
		else if(ch2==3)
		{
			check();
		}
		else
		printf("\n Wrong input!!");
		printf("\n WANT TO CONTINUE? y/n:");
		fflush(stdin);
		scanf("%s",&ch1);
	}
	getch();
}
void push()
{
	if(s.ts_top>(MAX-1))
	{
		printf("\n Stack Overflow!!!");
	}
	else
	{
		s.cb[++s.ts_top]=s.ts_top;
	}
}
void pop()
{
	if(s.ts_top<0)
	{
		printf("\n Stack Underflow");
	}
	else
	{
		s.ts_top--;
	}
}
void check()
{
	int i=s.ts_top;
	printf("CUBOARD:");
	while(i>-1)
	{
		printf("\n %d - tshirt",s.cb[i]+1);
		i--;
	}
}
