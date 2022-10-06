#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	char ch;
	ch = getchar();
	if (ch >= 65 && ch<= 90) {
		printf("%c\n", ch+32);
	}
	else if (ch >= 97 && ch <= 122) {
		printf("%c\n", ch - 32);
	}
	else {
		printf("%c\n", ch);
	}
	

	return 0;
}