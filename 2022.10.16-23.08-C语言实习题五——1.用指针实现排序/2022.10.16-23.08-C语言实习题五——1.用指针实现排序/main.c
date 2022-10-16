#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	int* p = (int*)arr;
	for (int i = 0; i < 10 - 1; i++) {
		for ( p = (int*)arr; p < ((int *)arr)+(10-1-i); p++) {
			if (*p > *(p + 1)) {
				int tmp = *p;
				*p = *(p + 1);
				*(p + 1) = tmp;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d", arr[i]);
		if (i != 9) {
			printf(" ");
		}
	}
	printf("\n");

	return 0;
}