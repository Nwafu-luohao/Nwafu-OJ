#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	char str[100];
	gets(str);
	int i = 0;
	while (str[i] != '\0')
	{
		if ((int)str[i] >= 97 && (int)str[i] <= 122) {
			int n = (int)str[i] + 2;
			if (n > 122)
				n = n + 96 - 122;
			str[i] = n;
		}
		if ((int)str[i] >= 65 && (int)str[i] <= 90) {
			int n = (int)str[i] + 2;
			if (n > 90)
				n = n + 64 - 90;
			str[i] = n;
		}
		i++;
	}
	puts(str);

	return 0;
}