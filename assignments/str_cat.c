#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	int ch1,i,n1,n2,k;
    char s1[10][200],s2[10][200];
	char ch;
	//clrscr();
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
                        printf("\n Enter the string:");
                        scanf("%s",s1[i]);
                    }
                    printf("\n Enter the number of inputs for list 2:");
                    scanf("%d",&n2);
                    for(i=0;i<n2;i++)
                    {
                        printf("\n Enter a character for the string :");
                        scanf("%s",s2[i]);
                    }
                    break;
			case 2:
                    k=n2-1;
                    for(i=0;i<n1;i++) 
                    {
                        if(!(strcmp(s1[i],"none")))
                        {
                            strcpy(s1[i],"");
                            strcpy(s1[i],s2[k]);
                            strcpy(s2[k],"");
                        }
                        if(!(strcmp(s2[k],"none")))
                        {
                            strcat(s1[i],"");
                            strcpy(s2[k],"");
                        }
                        else
                        {
                            strcat(s1[i],s2[k]);
                        }
                        k--;
                    }
                    for(i=0;i<n1;i++) 
                    {
                        printf("%s  ",s1[i]);
                    }
                    break;
			default: printf("\n Wrong Input!!!");
		}
		printf("\n Do you want to continue?? y/n:");
		scanf("%s",&ch);
	}while(ch=='y'||ch=='Y');
	//getch();
}
