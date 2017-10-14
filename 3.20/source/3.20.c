#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	while (1)
	{

		float work; //工作時數
		float rate; //每小時金額
		float salary; //總薪資
		printf("請輸入工作時數\n");
		scanf_s("%f",&work);
		printf("請輸入每小時工作金額");
		scanf_s("%f", &rate);

		if (work > 40)
		{
			salary = 40*rate+(work-40)*rate*1.5;
			printf("總工作薪資為%f\n\n\n\n", salary);
		}
		else
		{
			salary = work*rate;
			printf("總工作薪資為%f\n\n\n\n", salary);
		}
	}

}