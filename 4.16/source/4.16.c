#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i;
	int j;
	int k;
	char sign ='*';
	printf("(A) \n");
	for (i = 0; i < 10;i++)
	{
		for (j = 0; j <=i;j++)
		{
			printf("%c",sign);
		}
		printf("\n");
	}
	printf("(B)\n");
	
	for (i = 0; i < 10; i++)
	{
		for (j =9; j >= i; j--)
		{
			printf("%c", sign);
		}
		printf("\n");
	}
	printf("(C)\n");
	
	 for (i = 0; i <10; i++)
	{
		 for (j = 9; j >= i; j--)
		 {
			 printf("*");
		 }
		 printf("\n");
		
		for (k = 0; k <= i; k++)
		{
			printf(" ");
		}		
	}
	 printf("(D)\n");

	 for (i = 10; i >0; i--)
	 {
		 for (k = 0; k <i; k++)
		 {
			 printf(" ");
		 }
		 for (j = 10; j >=i; j--)
		 {
			 printf("*");
		 }
		 printf("\n");
	
			 
	 }


	system("pause");
}
