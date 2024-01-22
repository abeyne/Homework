#include <stdio.h>

int main() {
    int height;
    float weight, bmi;

    printf("身長をcm単位で入力してください: ");
    scanf_s("%d", &height);

    printf("体重をkg単位で入力してください: ");
    scanf_s("%f", &weight);

    bmi = weight / ((height / 100.0) * (height / 100.0));
    printf("あなたのBMIは: %.1f\n", bmi);

    if (bmi < 18.5) {
        printf("Underweight\n");
    } else if (bmi >= 18.5 && bmi < 25) {
        printf("Healthy weight\n");
    } else {
        printf("Overweight\n");
    }

    return 0;
}
