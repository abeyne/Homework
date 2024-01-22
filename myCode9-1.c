#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, max, min;
    int A[1000], B[1000];

    // 乱数の個数、最大値、最小値を入力
    printf("乱数の個数を入力してください（最大1000個）: ");
    scanf_s("%d", &n);
    printf("最大値を入力してください: ");
    scanf_s("%d", &max);
    printf("最小値を入力してください: ");
    scanf_s("%d", &min);

    // 乱数の種を設定
    srand(time(NULL));

    // 乱数を生成し、A[]に格納
    for (int i = 0; i < n; i++) {
        A[i] = rand() % (max - min + 1) + min;
    }

    // 乱数を表示
    printf("生成された乱数: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // A[]をB[]にコピー
    for (int i = 0; i < n; i++) {
        B[i] = A[i];
    }

    // バブルソート（昇順）
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (B[j] > B[j + 1]) {
                int temp = B[j];
                B[j] = B[j + 1];
                B[j + 1] = temp;
            }
        }
    }

    // 昇順に並べた結果を表示
    printf("昇順に並べた結果: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    // バブルソート（降順）
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (B[j] < B[j + 1]) {
                int temp = B[j];
                B[j] = B[j + 1];
                B[j + 1] = temp;
            }
        }
    }

    // 降順に並べた結果を表示
    printf("降順に並べた結果: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}
