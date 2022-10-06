#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	float supline, dowline, high, area;

	scanf("%f", &supline);
	scanf("%f", &dowline);
	scanf("%f", &high);
	area = ((supline + dowline) * high) / 2.0; printf("%f\n", area);

	return 0;
}