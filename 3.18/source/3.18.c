#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	while (1)
	{

		float sale; // ��P���P���B
		float salary; // ���J

		printf("�п�J��P���P����B\n");
		scanf_s("%f", &sale);
		salary = 200 + sale * 9/100;
		printf("��P���J�O%f\n", salary);
	}
}