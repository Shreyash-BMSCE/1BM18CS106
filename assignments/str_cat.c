#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 10
//void input_s(char *);
//void disp(char *);
void main()
{
	struct strr
	{
		char a[MAX];
	}s1[MAX],s2[MAX];
	int ch1,i,n1,n2,k;
	char ch;
	clrscr();
	do
	{
		printf("\n Enter choice: \n 1.Enter Input 2.Display output \t");
		scanf("%d",&ch1);
		switch(ch1)
		{
			case 1: printf("\n Enter the number of inputs for list 1:");
			scanf("%d",&n1);

		    for(i=0;i<n1;i++)
		    {
			printf("\n Enter the number of letters you want to input for the string :");
			scanf("%d",)
			fflush(stdin);
			scanf("%s",&s1[i].a);
			k=count(s1[i].a);
			s1[i].a[k+1]='\0';
		    }
		    //s1[0].a[1]='\0';
		    printf("\n Enter the number of inputs for list 2:");
		    scanf("%d",&n2);
		    for(i=0;i<n2;i++)
		    {
			printf("\n Enter a character for the string :");
			fflush(stdin);
			scanf("%s",&s2[i].a);
			k=strlen(s2[i].a);
			s2[i].a[k+1]='\0';
		    }


		    break;
			case 2:
			--n2;
			for(i=0;i<=(n2+1);i++) {

			strcat(s1[i].a,s2[n2-i].a);
			k = strlen(s1[i].a);
			s1[i].a[k+1]='\0';
			fflush(stdout);
			printf("%s",s1[i].a);
			}
				    break;
			default: printf("\n Wrong Input!!!");
		}
		printf("\n Do you want to continue?? y/n:");
		scanf("%s",&ch);
	}while(ch=='y'||ch=='Y');
	//getch();
}
/*
void input_s(char *a)
{
    int n,i;
    char val[MAX];
    printf("\n Enter a character for the string :");
    gets(val);
	a=val;        
}
		
void disp(char *a)
{
	int i;
	for(i=0;i<=MAX;i++)
	{
		printf(" %s",a[i]);
	}
}

void strr(char *s1,char *s2,int n1,int n2)
{
    int i;
    for(i=0;i<MAX;i++)
    {
        
    }
}
*/
