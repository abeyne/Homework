// fgetを用いるとうまくいく。scanf_sはなぜかうまくいかない。


#include <stdio.h>
#include <string.h>

int main() {
    char input[501];
    int count[10] = { 0 };

    printf("数字を含む文字列を入力してください（500文字以内）: ");
    fgets(input, 501, stdin);// 末尾に改行文字が入るので削除
	input[strlen(input) - 1] = '\0';

    // カウント
    for (int i = 0; i < strlen(input); i++) {
        if (input[i] >= '0' && input[i] <= '9') {
            count[input[i] - '0']++;
        }
    }

    // 表示
    printf("各数字文字の個数:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d: %d\n", i, count[i]);
    }

    char index[10] = "0123456789";
    
    // ソート
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (count[i] < count[j]) {
                int temp = count[i];
                count[i] = count[j];
                count[j] = temp;

                char temp2 = index[i];
                index[i] = index[j];
                index[j] = temp2;
            }
        }
    }

	// 表示
    printf("出現回数の多い順に並べ替えた結果:\n");
    for (int i = 0; i < 10; i++) {
		printf("%c: %d\n", index[i], count[i]);
	}
    return 0;
}
