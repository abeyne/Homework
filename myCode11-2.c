#include <stdio.h>
#include <stdlib.h>
#define _CRT_RAND_S

void inputrandom(int A[], int n, int maximum, int minimum) {
	int i;
	for (i = 0; i < n; i++) {
		unsigned int number = 0;
		rand_s(&number);
		A[i] = number % (maximum - minimum + 1) + minimum;
	}
}

void prinall(int A[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("A[%d]=%d\n ", i + 1, A[i]);
	}
	printf("\n");
}

int max_int(int A[], int n) {
	int i, max = A[0];
	for (i = 1; i < n; i++) {
		if (max < A[i]) {
			max = A[i];
		}
	}
	return max;
}

int min_int(int A[], int n) {
	int i, min = A[0];
	for (i = 1; i < n; i++) {
		if (min > A[i]) {
			min = A[i];
		}
	}
	return min;
}

double average(int A[], int n) {
	int i;
	double sum = 0;
	for (i = 0; i < n; i++) {
		if (A[i] < 0) {
			sum += -A[i];
		}
		else {
			sum += A[i];
		}
	}
	return sum / n;
}

void bubblesort(int A[], int n) {
	int i, j, temp;
	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--) {
			if (A[j - 1] > A[j]) {
				temp = A[j - 1];
				A[j - 1] = A[j];
				A[j] = temp;
			}
		}
	}
}


int main(void) {
	int n=0,maximum=0,minimum=0;
	puts("発生させる乱数の数、最大値、最小値絵をスペース区切りで入力してください。");
	puts("但し、乱数の数は1000が最大です。");
	scanf_s("%d %d %d",&n,&maximum,&minimum);
	int A[1000];
	inputrandom(A,n,maximum,minimum);
	printf("整列前\n");
	prinall(A,n);
	printf("乱数の最大値は%d\n", max_int(A, n));
	printf("乱数の最小値は%d\n", min_int(A, n));
	printf("乱数の絶対値の平均は%3.lf\n", average(A, n));
	bubblesort(A, n);
	printf("整列後\n");
	prinall(A,n);
	return 0;
}