#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
#define MAX 5
void enqueue(long int *,int *,long int);
void dequeue(long int *,int *, int *);
void disp(long int *, int *,int *);
void compute(long int *,long int *,int *,int *,int *);
void main()
{
	long int queue[MAX];
    long int queue1[MAX];
	int r=-1,f=0,r1=-1,f1=0;
	int ch1,n;
    int val,i;
	char ch;
	//clrscr();
	do
	{
		printf("\n Enter choice: \n 1.Enqueue 2.DeQueue 3.Display 4.Display New Queue \t");
		scanf("%d",&ch1);
		switch(ch1)
		{
			case 1: printf("\n Enter the number of items:");
                    scanf("%d",&n);
                    for(i=0; i<n; i++)
                    {
                        printf("\n Enter the value:");
				        scanf("%d",&val);
                        enqueue(queue,&r,val);
                    }
				    break;
			case 2: dequeue(queue,&r,&f);
				    break;
			case 3: disp(queue,&r,&f);
				    break;
            case 4: compute(queue,queue1,&f,&r,&r1);
                    disp(queue1,&r1,&f1);
                    break;
			default: printf("\n Wrong Input!!!");
		}
		printf("\n Do you want to continue?? y/n:");
		scanf("%s",&ch);
	}while(ch=='y'||ch=='Y');
	//getch();
}
void enqueue(long int *a,int *r,long int val)
{
		if(*r==MAX-1)
		{
			printf("\n Queue is empty!!");
		}
		else
		{
				++(*r);
				a[*r]=val;
            
		}
}
void dequeue(long int *a,int *r,int *f)
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
void disp(long int *a,int *r,int *f)
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
				printf("\t %ld",a[i]);
			}
		}
}
void compute(long int *a,long int *a1,int *f,int *r,int *r1)
{
    int i,flag;
    int j;
    for(i=*f; i<=*r; i++)
    {
        flag=-1;
        for(j=1; j<=10; j++)
        {
            if(a[i] % j!=0)
            {
                flag=0;
                break;
            }
        }
        if(flag==-1)
        {
            enqueue(a1,r1,a[i]);
        }
    }
} 
