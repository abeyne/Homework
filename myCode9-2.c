#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

    int n;
    int i;

    printf("正方行列の次元を入力してください（最大25）：");
    scanf_s("%d", &n);

    // 乱数の種を設定
    srand(time(NULL));

    // 正方行列の生成と表示
    double matrix[25][25];
    printf("\n生成された行列：\n\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = (double)rand(time(NULL)) / RAND_MAX;
            printf("%.2f ", matrix[i][j]);
        }
        printf("\n");
    }


    //対角成分の抽出
    double diagonal[25] = { 0 };

    for (int i = 0; i < n; i++) {
        diagonal[i] = matrix[i][i];
    }


    //対角成分の昇順ソート
    double tmp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (diagonal[j - 1] > diagonal[j]) {
                tmp = diagonal[j - 1];
                diagonal[j - 1] = diagonal[j];
                diagonal[j] = tmp;
            }
        }
    }


    // 対角成分を戻す

    for (int i = 0; i < n - 1; i++) {

        matrix[i][i] = diagonal[i];

    }

    // 戻した対角成分を含む行列を表示する

    printf("\n\n対角成分の昇順化：\n\n");

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            printf("%.2f ", matrix[i][j]);
        }

        printf("\n");

    }


        //対角成分の降順ソート
        for (int i = 0; i < n - 1; i++) {
            for (int j = n - 1; j > i; j--) {
                if (diagonal[j - 1] < diagonal[j]) {
                    tmp = diagonal[j - 1];
                    diagonal[j - 1] = diagonal[j];
                    diagonal[j] = tmp;
                }
            }
        }


        // 対角成分を戻す

        for (int i = 0; i < n - 1; i++) {

            matrix[i][i] = diagonal[i];

        }

        // 戻した対角成分を含む行列を表示する
        printf("\n\n対角成分の降順化：\n\n");


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%.2f ", matrix[i][j]);
            }
            printf("\n");
        }


        return 0;

}