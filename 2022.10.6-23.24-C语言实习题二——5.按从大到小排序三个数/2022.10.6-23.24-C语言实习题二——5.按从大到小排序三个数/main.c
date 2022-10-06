#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int a, b, c;
	int tmp;
	scanf("%d%d%d", &a, &b, &c);
	printf("≈≈–Ú«∞£∫%d, %d, %d\n", a, b, c);
	if (a < b) {
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c) {
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c) {
		tmp = b;
		b = c;
		c = tmp;
	}
	printf("≈≈–Ú∫Û£∫%d, %d, %d\n", a, b, c);

	return 0;
}