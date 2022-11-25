#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[3][4] = { 0 };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	int* p1 = (int*)arr;
	int max = -1;
	int row, col;
	for (p1; p1 < (int*)(arr) + 12; p1++) {
		if (*p1 > max) {
			max = *p1;
			int count = p1 - (int*)(arr);
			row = count / 4;
			col = count % 4;
		}
	}
	printf("%d %d %d", row, col, max);

	return 0;
}