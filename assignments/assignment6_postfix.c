#include<stdio.h>
#define MAX 10
//#include<conio.h>


void push(int *,int *,int );
int pop(int *,int *);
void eval(int *,int *,char *);

void main()
{
    int a[MAX],val;
    int top=-1;
    int ch1;
    char ch,exp[20];
	printf("\n Enter the expression to be evaluated: ");
	gets(exp);
  //  clrscr();
    eval(a,&top,exp);
    val=a[top];
    printf("\n Expression = %s \n Final Value = %d \n \n ",exp,val);
  //  getch();
}
void push(int *a,int *top,int val )
{
    if(*top==MAX-1)
    {
	printf("Stack is full!!");
    }
    else
    {
	a[++(*top)]=val;
    }
}
int pop(int *a,int *top)
{
    int op;
    op=a[*top];
    --(*top);
    return op;
}
void eval(int *a1,int *top,char *p)
{
    int i=0,op1,op2,op;
    char a;
    while (p[i]!='\0')
    {
	a=p[i];
	if(a=='+')
	{
	    op1=pop(a1,top);
	    op2=pop(a1,top);
	    op2+=op1;
	    push(a1,top,op2);
	}
	else if (a=='-')
	{
	    op1=pop(a1,top);
	    op2=pop(a1,top);
	    op2-=op1;
	    push(a1,top,op2);
	}
	else if(a=='*')
	{
	    op1=pop(a1,top);
	    op2=pop(a1,top);
	    op2*=op1;
	    push(a1,top,op2);
	}
	else if(a=='/')
	{
	    op1=pop(a1,top);
	    op2=pop(a1,top);
	    op2/=op1;
	    push(a1,top,op2);
	}
	else
	{
	    op=(int)a-48;
	    push(a1,top,op);
	}
	i++;
    }
}







    

