#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
	float total;   //�`���B = ����*(1+�Q�v)^����
	float rate;
	int year; //����
	                     
	
	

		for (rate = 0.1; rate <= 0.12; rate +=0.005)
		{
			printf("Rate:%.2f%%\n\n",rate*100);

			for (year = 1; year <= 15; year++)
			{
				printf("��%d�~",year);
				total = 5000 * pow((1 + rate), year);
				printf("���B%.2f\n", total);
			}
			printf("\n");
			
		}
	
	system("pause");


}
