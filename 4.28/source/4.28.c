#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a;
	int b;//經理人員固定薪資
	int c;//時薪工的時數
	int d;//時薪
	int e;//總薪資
	int f;//當周銷售金額
	int g;//零工完成工作件數
	int h;//完成每一件數的新資
	while (1)
	{
		
		printf("(1)經理人員(2)時薪工(3)抽傭金工(4)零工(5)離開程式\n");
		printf("請輸入1~5\n");
		scanf_s("%d", &a);
		if (a != 5)
		{
			switch (a)
			{
			case(1) :
				printf("這是經理人員的固定薪資\n");
				printf("請輸入固定薪資\n");
				scanf_s("%d", &b);
				printf("經理人員的固定薪資為%d\n\n", b);
				break;
			case(2) :
				printf("這是計算時薪工薪資的程式\n\n");
				printf("請輸入工作時數\n");
				scanf_s("%d", &c);
				printf("請輸入時薪\n");
				scanf_s("%d", &d);
				if (c > 40)
				{
					e = 40 * d + (c - 40)*d*1.5;
					printf("時薪工的總薪資為%d\n\n", e);
				}
				else
				{
					e = c * d;
					printf("時薪工的總薪資為%d\n\n", e);
				}
				break;
			case(3) :
				printf("這是計算抽傭金工薪資的程式\n");
				printf("請輸入當周的銷售金額\n");
				scanf_s("%d", &f);
				e = 250 + f*5.7 / 100;
				printf("抽傭金工的薪水為%d\n\n", e);
				break;
			case(4) :
				printf("這是計算零工薪資的程式\n");
				printf("請輸入零工完成工作件數\n");
				scanf_s("%d", &g);
				printf("請輸入完成每一件數的薪資\n");
				scanf_s("%d", &h);
				e = g*h;
				printf("零工的總薪資為%d\n\n", e);
				break;
			}
		}
		else
		{
			break;
		}
		

		}
	}