#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int account;	//帳號 
	float balance;	//月初未付清之餘額  
	float payment;	//簽帳之款項
	float paid;		//已付之款項
	float credit;		//允許之信用額度
	float newbalance;	//新的未付清餘額 
	
	while (1)
	{
		printf("請輸入帳號\n");
		scanf_s("%d", &account);;
		printf("請輸入月初未付清之餘額\n");
		scanf_s("%f", &balance);
		printf("請輸入已簽帳的款項\n");
		scanf_s("%f", &payment);
		printf("請輸入以付之款項\n");
		scanf_s("%f", &paid);
		printf("請輸入允許之信用額度\n");
		scanf_s("%f", &credit);
		newbalance = balance + payment - paid;
		if (newbalance > credit)
		{
			printf("已超過信用額度\n\n\n\n\n");
		}
		else
		{
			printf("未超過信用額度\n\n\n\n\n");
		}
	}
	
}

