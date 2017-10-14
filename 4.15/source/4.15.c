#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
	float total;   //總金額 = 本金*(1+利率)^期數
	float rate;
	int year; //期數
	                     
	
	

		for (rate = 0.1; rate <= 0.12; rate +=0.005)
		{
			printf("Rate:%.2f%%\n\n",rate*100);

			for (year = 1; year <= 15; year++)
			{
				printf("第%d年",year);
				total = 5000 * pow((1 + rate), year);
				printf("金額%.2f\n", total);
			}
			printf("\n");
			
		}
	
	system("pause");


}
