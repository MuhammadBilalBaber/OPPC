#include<stdio.h>
main()
{
	int i,j,k;
	int ch=65;
	for(i=0;i<4;i++)
	{
		for(j=3;j>i;j--)
		{
			printf(" ");
			
		}
		for(k=0; k<=i;k++)
		{
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(k=3;k>i;k--)
		{
				printf("%c ",ch);
			ch--;
		}
		printf("\n");
	}
}
