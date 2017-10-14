#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i;
	int j;
	int k;
	for (i = 1; i <=5; i++)
	{
		for (j =4; j >=i; j--)
		{
			printf(" ");
		}
		for (k = 1; k <=2*i-1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 4; i >=1 ; i--)
	{
		for (j = 4; j >= i; j--)
		{
			printf(" ");
		}
		for (k = 1; k <=2*i-1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
}