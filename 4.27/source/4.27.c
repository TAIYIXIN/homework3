#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
	int a; //����
	int b; //�{��
	int c; //����
	int d; //a������
	int e; //b������
	int f; //c������
	
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