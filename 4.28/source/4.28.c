#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a;
	int b;//�g�z�H���T�w�~��
	int c;//���~�u���ɼ�
	int d;//���~
	int e;//�`�~��
	int f;//��P�P����B
	int g;//�s�u�����u�@���
	int h;//�����C�@��ƪ��s��
	while (1)
	{
		
		printf("(1)�g�z�H��(2)���~�u(3)��Ī��u(4)�s�u(5)���}�{��\n");
		printf("�п�J1~5\n");
		scanf_s("%d", &a);
		if (a != 5)
		{
			switch (a)
			{
			case(1) :
				printf("�o�O�g�z�H�����T�w�~��\n");
				printf("�п�J�T�w�~��\n");
				scanf_s("%d", &b);
				printf("�g�z�H�����T�w�~�ꬰ%d\n\n", b);
				break;
			case(2) :
				printf("�o�O�p����~�u�~�ꪺ�{��\n\n");
				printf("�п�J�u�@�ɼ�\n");
				scanf_s("%d", &c);
				printf("�п�J���~\n");
				scanf_s("%d", &d);
				if (c > 40)
				{
					e = 40 * d + (c - 40)*d*1.5;
					printf("���~�u���`�~�ꬰ%d\n\n", e);
				}
				else
				{
					e = c * d;
					printf("���~�u���`�~�ꬰ%d\n\n", e);
				}
				break;
			case(3) :
				printf("�o�O�p���Ī��u�~�ꪺ�{��\n");
				printf("�п�J��P���P����B\n");
				scanf_s("%d", &f);
				e = 250 + f*5.7 / 100;
				printf("��Ī��u���~����%d\n\n", e);
				break;
			case(4) :
				printf("�o�O�p��s�u�~�ꪺ�{��\n");
				printf("�п�J�s�u�����u�@���\n");
				scanf_s("%d", &g);
				printf("�п�J�����C�@��ƪ��~��\n");
				scanf_s("%d", &h);
				e = g*h;
				printf("�s�u���`�~�ꬰ%d\n\n", e);
				break;
			}
		}
		else
		{
			break;
		}
		

		}
	}