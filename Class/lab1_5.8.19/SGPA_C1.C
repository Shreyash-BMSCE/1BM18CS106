#include<stdio.h>
#include<math.h>
#include<conio.h>

struct stud
{
	char name[20];
	int sem;
	char usn[20];
	float marks[6];
	float credit[6];
	float sgpa;
};

void main()
{
	struct stud s1;
	int grade,i;
	printf("\n Enter name:");
	gets(s1.name);
	for(i=0;i<6;i++)
	{
		printf("\n Enter subjects marks and their credits:");
		scanf("%f \n %f",&s1.marks[i],&s1.credit[i]);
	}
	for(i=0; i<6; i++)
	{
		if((s1.marks[i]<=100)&&(s1.marks[i]>90))
		{
			grade=10;
		}
		else if(s1.marks[i]>=80)
		{
			grade=9;
		}
		else if(s1.marks[i]>=70)
		{
			grade=8;
		}
		else if(s1.marks[i]>=60)
		{
			grade=7;
		}
		else if(s1.marks[i]>=50)
		{
			grade=6;
		}
		else if(s1.marks[i]>=40)
		{
			grade=5;
		}
		else if(s1.marks[i]<40)
		{
			grade=0;
		}
		s1.sgpa+=(float)(grade*s1.credit[i]);
	}
	s1.sgpa/=20;
	printf("\n Your SGPA is : %f",s1.sgpa);
	getch();
}









