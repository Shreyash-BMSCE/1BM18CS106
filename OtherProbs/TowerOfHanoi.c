#include<stdio.h>

void towerOfHanoi(int n, char src,char dest, char temp)
{
	if (n == 1)
	{
		printf("Move disk 1 from rod %c to rod %c \n",src ,dest);
		return;
	}
	towerOfHanoi(n - 1, src, temp, dest);
	printf("Move disk %d from rod %c to rod %c \n",n ,src ,dest);
	towerOfHanoi(n - 1, temp, dest, src);
}


void main()
{
	int n = 4; // Number of disks
	printf("\n Enter n:");
	scanf("%d",&n);
	towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
}
