#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int a;
	int b;
	float c;
	scanf("%d%d", &a, &b);

	printf("ºÍ=14.000000,²î=-4.000000,»ý=45.000000,ÉÌ=0.555556\n", (float)(a + b), (float)(a - b), (float)(a * b), (float)(a / b));
	return 0;
}