#include <stdio.h>

int main() {
    int num1, num2;
    float percentage;

    printf("二つの整数を入力してください。: ");
    scanf("%d %d", &num1, &num2);

    percentage = (float)num1 / num2 * 100;

    printf("%d は %d の %.2f%% です。", num1, num2, percentage);

    return 0;
}

