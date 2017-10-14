#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	while (1)
	{

		float sale; // 當周的銷售額
		float salary; // 收入

		printf("請輸入當周的銷售金額\n");
		scanf_s("%f", &sale);
		salary = 200 + sale * 9/100;
		printf("當周收入是%f\n", salary);
	}
}