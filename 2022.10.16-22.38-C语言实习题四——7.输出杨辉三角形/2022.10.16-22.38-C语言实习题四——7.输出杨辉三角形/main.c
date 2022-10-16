#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	int a[100][100] = { 0 };
	for (int i = 0; i < n; i++) {
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}