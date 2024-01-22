#include <stdio.h>

int main (void)  {

	int p = 1, i, n = 0; //変数を定義し、初期化する。

	printf("n!を計算します。自然数nの値を入力してください：\n　");
	scanf_s("%d", &n);


	//for文を用いてn!を計算する

	if (n < 0)
	{
		printf("\nｎは自然数を入力してください。\n");
		return 1;
	}else {

		for (i = 1; i <= n; i++) // p=1と初期化しておくことで、n=0の時、初期化されたp ( =1 )がn!として出力される   
		{
			p = p * i;
		}

		printf("\n\n n!＝%d　( n = %d ).\n", p, n);

	}



	

	return 0;
}