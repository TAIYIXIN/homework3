#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	while (1)
	{

		float principal; //資金
		float rate; // 利率
		float days; // 天數
		float interest; //利息

		printf("請輸入資金\n");
		scanf_s("%f", &principal);
		printf("請輸入利息\n");
		scanf_s("%f", &rate);
		printf("請輸入天數\n");
		scanf_s("%f", &days);
		interest = principal * rate * days / 365;
		printf("當周收入是%f\n\n\n\n",interest);
	}
}