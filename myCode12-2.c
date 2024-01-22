#include<stdio.h>
#include<string.h>
#include<ctype.h>





// 文字列の空白を削除する関数
void space(char str[]) {

	int i, j;
	for (i = 0, j = 0; i < strlen(str); i++) {


		if (!isspace((unsigned char)str[i])) {
			str[j++] = str[i];
		}

	}

	str[j] = '\0';

}


//　回文かどうか判定する関数
int palin_int(char str[], int k) {

	for (int i = 0; i < k / 2; i++) {

		if (str[i] != str[k - i - 1]) {
			return 0;
		}

	}

	return 1;
}


// 文字列の連結を行う関数
int palin_int(char str[], int k);

// 文字列の空白を削除する関数
void space(char str[]);




int main(void) {

	// 後でstr1とstr2を連結するので、str1の配列を大きくとる
	char str1[500], str2[250];
	char palin[2][30] = { "回文ではない" ,"回文である" };

	// 文字列の入力を促す
	printf("文字列１を入力してください\n");
	gets_s(str1, 250);

	printf("文字列２を入力してください\n");
	gets_s(str2, 250);

	// 文字列の空白を削除する
	space(str1);
	space(str2);

	// 文字列の連結を行う
	strcat_s(str1, 500, str2);
	printf("連結した文字列は");
	puts(str1);

	// 回文かどうか判定する
	int strnum;
	strnum = strlen(str1);

	printf("%d文字\n", strnum);
	printf("%sは%s", str1, palin[palin_int(str1, strnum)]);


	return 0;

}



