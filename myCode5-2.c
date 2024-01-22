#include <stdio.h>

int main(void) {

	int i, englishScore = 0, mathScore = 0, japaneseScore = 0, totalScore = 0, studentNumber = 0;
	int englishPassedMember = 0, mathPassedMember = 0, japanesePassedMember = 0, sumPassedMember = 0;
	double sumEnglishScore = 0, sumMathScore = 0, sumJapaneseScore = 0, sumTotalScore = 0;


	printf_s("英語、数学、国語の点数をスペース区切りで入力してください。\n\n");
	printf_s("いづれかの教科でマイナスの値を入力すると入力終了です。\n\n");

	
	for (i = 0; ; i++) {

		//点数を入力させる
		scanf_s("%d %d %d", &englishScore, &mathScore, &japaneseScore);

		totalScore = englishScore + mathScore + japaneseScore;


		//終わるときはここで終わる。終わるために打つ点数は母集団に含めない。
		if (englishScore < 0 || mathScore < 0 || japaneseScore < 0) 
		{
			break; 
		}


		//得点情報を記録する
		sumEnglishScore = sumEnglishScore + englishScore;
		sumJapaneseScore = sumJapaneseScore + japaneseScore;
		sumMathScore = sumMathScore + mathScore;
		sumTotalScore = sumTotalScore + totalScore;

		//受験者数をインクリメント
		studentNumber++;


		//合否に合わせて合格者数をインクリメント
		if (englishScore >= 50)
		{
			englishPassedMember++;
		}

		if (mathScore >= 50)
		{
			mathPassedMember++;
		}
		
		if (japaneseScore >= 50)
		{
			japanesePassedMember++;
		}
		
		if (totalScore >= 210 && englishScore >= 50 && mathScore >= 50 && japaneseScore >= 50)
		{
			sumPassedMember++;
		}

	}


	//１人も入力されていないとき、集計結果を表示しない。
	if (studentNumber == 0)
	{
		printf("\n入力された情報が十分ではありません。１人以上の情報を入力してください。\n");
	}
	else {

		printf("\n\n総合平均点：%.2f点\n", sumTotalScore / (double)studentNumber);
		printf("英語平均点：%.2f点\n", sumEnglishScore / (double)studentNumber);
		printf("数学平均点：%.2f点\n", sumMathScore / (double)studentNumber);
		printf("国語平均点：%.2f点\n", sumJapaneseScore / (double)studentNumber);

		printf(" 受験者数 ：%d人\n", studentNumber);

		printf(" 合格者数 ：%d人\n", sumPassedMember);
		printf("英語合格者：%d人\n", englishPassedMember);
		printf("数学合格者：%d人\n", mathPassedMember);
		printf("国語合格者：%d人\n", japanesePassedMember);
	}

	

	return 0;
}