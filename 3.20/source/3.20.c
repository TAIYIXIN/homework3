#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	while (1)
	{

		float work; //�u�@�ɼ�
		float rate; //�C�p�ɪ��B
		float salary; //�`�~��
		printf("�п�J�u�@�ɼ�\n");
		scanf_s("%f",&work);
		printf("�п�J�C�p�ɤu�@���B");
		scanf_s("%f", &rate);

		if (work > 40)
		{
			salary = 40*rate+(work-40)*rate*1.5;
			printf("�`�u�@�~�ꬰ%f\n\n\n\n", salary);
		}
		else
		{
			salary = work*rate;
			printf("�`�u�@�~�ꬰ%f\n\n\n\n", salary);
		}
	}

}