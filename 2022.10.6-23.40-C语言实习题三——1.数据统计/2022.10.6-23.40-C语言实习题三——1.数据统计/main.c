#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int n;
	int num, sum1 = 0, count1 = 0, sum2 = 0, count2 = 0;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &num);
		if (num % 2 != 0) {
			count1++;
			sum1 += num;
		}
		else
		{
			count2++;
			sum2 += num;
		}
	}

	printf("%d\n", sum1);
	printf("%d\n", count1);
	printf("%d\n", sum2);
	printf("%d\n", count2);

	return 0;
}