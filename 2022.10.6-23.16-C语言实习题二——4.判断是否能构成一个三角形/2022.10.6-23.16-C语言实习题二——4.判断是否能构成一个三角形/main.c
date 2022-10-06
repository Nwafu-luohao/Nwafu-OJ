#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}

	return 0;
}