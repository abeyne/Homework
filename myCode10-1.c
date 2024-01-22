// Creator: 安部結太
// Purpose: 10-1の解答です

#include <stdio.h>

int main(void)
{
	// 誕生石の名前を格納する配列
	char name[12][23] = {
		"Garnets",
		"Amethyst",
		"Bloodstone・Aquamarine",
		"Diamond",
		"Emerald・Jade",
		"Moonstone",
		"Rube",
		"Peridot・Sardonyx",
		"Sapphire",
		"Opal・Tourmaline",
		"topaz",
		"Turquoise・Lapislazuli"
	};


	// 入力を促す
	printf("あなたの誕生月を入力してください。\n");
	

	// 入力値を受け取る
	int month;
	scanf_s("%d", &month);
	

	// 入力値のチェック
	if (month < 1 || month > 12) {
		printf("入力が間違っています。");
		return 1;
	}

	// 結果を表示
	printf("あなたの誕生石は%s", name[month - 1]);

	return 0;
}


