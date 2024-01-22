#include<stdio.h>
#include<stdlib.h>

int main() {

	int thermday[12] = { 19,18,20,19,20,21,22,22,22,23,21,21 };


	//supday[0][x]→閏年でない場合の各月の日数
	//supday[1][x]→閏年の場合の各月の日数
	int supday[2][12] = {
		{31,28,31,30,31,30,31,31,30,31,30,31},
		{31,29,31,30,31,30,31,31,30,31,30,31}
	};

	char name[][29] = {
		{"山羊座"},
		{"水瓶座"},
		{"魚座"},
		{"牡羊座"},
		{"牡牛座"},
		{"双子座"},
		{"蟹座"},
		{"獅子座"},
		{"乙女座"},
		{"天秤座"},
		{"蠍座"},
		{"射手座"}
	};

	//　入力を促す
	printf("あなたの誕生年月日をスペース区切りで入力してください。\n（ 例：2004年4月30日　→　2004 4 30 ）\n");

	int year = 0, month = 0, day = 0;
	scanf_s("%d %d %d", &year, &month, &day);

	//　入力された年月日が正しいか判定
	//　閏年の場合
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		if (day > supday[1][month - 1]) {
			printf("存在しない日付です。\n");
			return 1;
		}
	}
	else {
		if (day > supday[0][month - 1]) {
			printf("存在しない日付です。\n");
			return 0;
		}
	}


	// 日付に応じて星座を表示
	for (int i = 1; i < 13; i++)
	{
		if (month == i) {
			if (day <= thermday[i - 1]) {
				printf("%s\n", name[i - 1]);
			}
			else {
				printf("%s\n", name[i]);
			}
		}
	}
	
	return 10;
}