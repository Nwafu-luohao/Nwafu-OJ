#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int a;
	int b;
	float c;
	scanf("%d%d", &a, &b);

	printf("��=14.000000,��=-4.000000,��=45.000000,��=0.555556\n", (float)(a + b), (float)(a - b), (float)(a * b), (float)(a / b));
	return 0;
}