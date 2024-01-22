#include <stdio.h>

int main() {
    float height, ideal_weight;

    printf("身長を入力してください（単位：cm）：");
    scanf("%f", &height);

    ideal_weight = height * height * 22 / 10000;

    printf("あなたの適正体重は %.1f kg です。\n", ideal_weight);

    return 0;
}
