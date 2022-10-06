#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	char ch;
	int n;
	ch = getchar();
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = n-i-1; j > 0; j--) {
			printf("%c", ' ');
		}
		for (int k = (i)*2+1; k > 0; k--) {
			printf("%c", ch);
		}
		printf("\n");
	}

	return 0;
}
