#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int account;	//�b�� 
	float balance;	//��쥼�I�M���l�B  
	float payment;	//ñ�b���ڶ�
	float paid;		//�w�I���ڶ�
	float credit;		//���\���H���B��
	float newbalance;	//�s�����I�M�l�B 
	
	while (1)
	{
		printf("�п�J�b��\n");
		scanf_s("%d", &account);;
		printf("�п�J��쥼�I�M���l�B\n");
		scanf_s("%f", &balance);
		printf("�п�J�wñ�b���ڶ�\n");
		scanf_s("%f", &payment);
		printf("�п�J�H�I���ڶ�\n");
		scanf_s("%f", &paid);
		printf("�п�J���\���H���B��\n");
		scanf_s("%f", &credit);
		newbalance = balance + payment - paid;
		if (newbalance > credit)
		{
			printf("�w�W�L�H���B��\n\n\n\n\n");
		}
		else
		{
			printf("���W�L�H���B��\n\n\n\n\n");
		}
	}
	
}

