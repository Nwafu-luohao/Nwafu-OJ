#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int a[5][5];
	int sum1=0, sum2=0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j) {
				sum1 += a[i][j];
			}
			if (i + j == 4) {
				sum2 += a[i][j];
			}
		}
	}
	printf("%d %d\n", sum1,sum2);

	return 0;
}