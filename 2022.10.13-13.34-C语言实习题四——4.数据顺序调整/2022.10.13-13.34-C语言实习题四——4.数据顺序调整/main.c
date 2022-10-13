#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int a[10] = { 0 };
	for (int i = 0; i < 10; i++) { // 输入元素
		scanf("%d", &a[i]);
	}
	int max=a[0], max_p=-1;
	int min=a[0], min_p = -1;
	for (int i = 0; i < 10; i++) { // 找出最大值及其位置
		if (a[i] >= max) {
			max = a[i];
			max_p = i;
		}
	}
	if (max_p != -1) {
		int tmp = a[0];
		a[0] = max;
		a[max_p] = tmp;
	}
	for (int i = 0; i < 10; i++) { // 找出最小值及其位置
		if (a[i] <= min) {
			min = a[i];
			min_p = i;
		}
	}
	if (min_p != -1) {
		int tmp = a[9];
		a[9] = min;
		a[min_p] = tmp;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}