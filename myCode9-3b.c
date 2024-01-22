#include <stdio.h>

int main() {
    int A[7] = { 1, 3, 9, 4, 7, 8, 6 };
    int n = 7;
    int i, j, temp;
    int comparisons = 0;
    int swaps = 0;

    printf("ソート前の配列: ");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    for (i = 0; i < n - 1; i++) {
        printf("パス%d: ", i + 1);
        for (j = 0; j < n - i - 1; j++) {
            comparisons++;
            if (A[j] > A[j + 1]) {
                swaps++;
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                printf("+ ");
            }
            else {
                printf("- ");
            }
        }
        printf("\n");
    }

    printf("ソート後の配列: ");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("比較回数: %d\n", comparisons);
    printf("交換回数: %d\n", swaps);

    return 0;
}

//比較回数、交換回数の出力は完成。
//比較した際の＋、－の出力は完成。