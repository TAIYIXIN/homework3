#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	while (1)
	{

		float principal; //���
		float rate; // �Q�v
		float days; // �Ѽ�
		float interest; //�Q��

		printf("�п�J���\n");
		scanf_s("%f", &principal);
		printf("�п�J�Q��\n");
		scanf_s("%f", &rate);
		printf("�п�J�Ѽ�\n");
		scanf_s("%f", &days);
		interest = principal * rate * days / 365;
		printf("��P���J�O%f\n\n\n\n",interest);
	}
}