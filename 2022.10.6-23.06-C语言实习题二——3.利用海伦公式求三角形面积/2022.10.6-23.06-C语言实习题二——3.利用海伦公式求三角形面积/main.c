#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c;
	float area;
	scanf("%f%f%f", &a, &b, &c);
	float p = (a + b + c) / 2;
	if (a + b > c && a + c > b && b + c > a) {
		area = sqrt(p * (p - a) * (p - b) * (p - c));
		printf("�����ε������:%f\n", area);
	}
	else {
		printf("��3�����޷����������!\n");
	}

	return 0;
}