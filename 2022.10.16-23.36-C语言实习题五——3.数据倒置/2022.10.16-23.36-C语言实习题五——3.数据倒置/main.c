#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int a[10] = {0};
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	int* p1 = (int*)a;
	int* p2 = ((int*)a) + 9;

	while (p1 < p2) {
		int tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2--;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d", a[i]);
		if (i != 9) {
			printf(" ");
		}
		else {
			printf("\n");
		}
	}

	return 0;
}