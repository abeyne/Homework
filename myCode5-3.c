#include <stdio.h>
#include <math.h>//math.hを読み込んだらうまく動作した

int main(void) {


	int x = 0, i = 0, j = 0, k = 0;
	double sum = 0, iThTerm =0, iThFactorial = 1, c = 0.35, cip = 1;

	for (x = 1; ; x++)
	{
		sum = 0;

		//e^0,35をｘ次マクローリン展開させる

		for (i = 0; i <= x; i++)
		{

			//for文で毎回計算しないとおかしい値になったため、階乗と累乗は毎回for文で計算している

			//階乗や累乗に使う変数を初期化する。（0.35)^0 = 0！= 1 であることに注意する
			cip = 1;
			iThFactorial = 1;


			for (j = 1; j <= i; j++)//i = 0 のときは実行しないようにする
			{
				cip = cip * c;
			}

			for (k = 1; k <= i; k++)//i = 0 のときは実行しないようにする
			{
				iThFactorial = iThFactorial * k;
			}



			iThTerm = cip / iThFactorial;
			sum = sum + iThTerm;
	
		}


		//結果を逐一表示する
		printf_s("approximation of e^0.35(%d) = %.15f\n", x, sum);



		//小数点以下12桁まで一致したらbreak
		if (1.419067548593 <= sum && sum < 1.419067548594) {
			printf_s("\nThe x that fulfills the purpose is %d.\n", x);
			break;
		}

	}

	return 0;
}