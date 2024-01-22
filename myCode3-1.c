#include <stdio.h>

int main() {
    int num;
    printf("整数を入力してください: ");
    scanf_s("%d", &num);
    if (num % 25 == 0) {
        printf("%dは25の倍数です。25の%d倍です。\n", num, num / 25);
    } else {
        printf("%dは25の倍数ではありません。\n", num);
    }
    return 0;
}
