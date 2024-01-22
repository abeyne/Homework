#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "MT.h"
#include <math.h>


double generateRundomNum(Nsq)
{
	int i;
	int Ncir = 0;
	int num = 0;

	init_genrand((unsigned)time(NULL));


	for (i = 0; i < Nsq; i++) {

		double x = (double)genrand_real1();
		double y = (double)genrand_real1();

		double z = sqrt(x * x + y * y);

		if (z <= 1) {Ncir++;}

	}

	double pi = (double)Ncir / (double)Nsq * 4;
	return pi;

}

int main(void)
{
	int Nsq;
	printf("乱数の個数を入力してください\n");
	scanf_s("%d",&Nsq);

	double pi = generateRundomNum(Nsq);

	printf("円周率は%fです\n", pi);

	return 0;
}

