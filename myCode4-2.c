#include <stdio.h>

int main() {
    int month;
    printf("月を入力してください: ");
    scanf_s("%d", &month);

    switch (month) {
    case 3:
    case 4:
    case 5:
        printf("春です。\n");
        break;
    case 6:
    case 7:
    case 8:
        printf("夏です。\n");
        break;
    case 9:
    case 10:
        printf("秋です。\n");
        break;
    case 11:
    case 12:
    case 1:
    case 2:
        printf("冬です。\n");
        break;
    default:
        printf("入力エラー\n");
    }

    return 0;
}
