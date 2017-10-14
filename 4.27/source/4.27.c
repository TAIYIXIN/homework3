#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
	int a; //斜邊
	int b; //臨邊
	int c; //對邊
	int d; //a的平方
	int e; //b的平方
	int f; //c的平方
	
	for (a = 1; a <=500; a++)
	{
		for (b =1; b<=500; b++)
		{
			for (c =1; c <=500; c++)
			{
					if (a*a == b*b + c*c)
					{
						printf("%d,%d\n", c, b);
					}	
			}
		}
	}
	system("pause");
}