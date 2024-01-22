#include <stdio.h>

int main() {
    double upper, lower, height, area;
    printf("上辺を入力してください: ");
    scanf("%lf", &upper);
    printf("下辺を入力してください: ");
    scanf("%lf", &lower);
    printf("高さを入力してください: ");
    scanf("%lf", &height);
    area = (upper + lower) * height / 2;
    printf("台形の面積は%.2lfです。\n", area);
    return 0;
}