#include<stdio.h>
//#include<conio.h>
#define MAX 20


void pop(int *);
void push(int *,int *);
void disp(int *,int *);
void bubbleSort(int *, int *);

int main()
{
	char ch='y';
	int ch1;
	int top=-1;
	int a[MAX];
//	clrscr();
	while(ch=='y'|| ch=='Y')
	{
		printf("\n Enter Choice: \n 1:Push \t 2:PoP \t 3:Display \n");
		scanf("\n %d",&ch1);
		switch(ch1)
		{
			case 1: push(a,&top);
				    break;
			case 2: pop(&top);
				    break;
            case 3: bubbleSort(a,&top);
                    disp(a,&top);
                    break;
			default: printf("\n Wrong input!!!");
		}
		printf("\n Do you want to continue?? y/n:");
		scanf("%s",&ch);
	}
	return 0;
//	getch();
}

void push(int *a,int *top)
{
    int item, n;
	if(*top==MAX-1)
	{
		printf("\n Overflow!!");
	}
	else
	{
        printf("\n Enter the number of items:");
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            printf("\n Enter the value:");
            scanf("%d",&item);
            a[++(*top)] = item;
        }
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
void disp(int *a,int *top)
{
	int i;
	i=*top;
	printf("<--");
	while(i>=0)
	{
		printf("\n%d",a[i]);
		i--;
	}
}
void bubbleSort(int *a, int *top)  
{  
    int i, j, temp;  
    for (i = 0; i < *top; i++)      
    {  
        for (j = 0; j < *top-i; j++)  
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];  
                a[j] = a[j+1];  
                a[j+1] = temp;  
            }
        }  
    }    
}  
