#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int a[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	int* max = &a[0];
	int* min = &a[0];
	for (int i = 1; i < 10; i++) {
		if (a[i] > *max) {
			max = &a[i];
		}
	}
	int tmp = 0;
	tmp = *max;
	*max = *((int*)a + 9);
	*((int*)a + 9) = tmp;
	for (int i = 1; i < 10; i++) {
		if (a[i] < *min) {
			min = &a[i];
		}
	}
	tmp = *min;
	*min = *((int*)a);
	*((int*)a) = tmp;

	for (int i = 0; i < 10; i++) {
		printf("%d", a[i]);
		if (i != 9) {
			printf(" ");
		}
	}

	return 0;
}