#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	char str1[20];
	char str2[20];
	gets(str1);
	gets(str2);
	char* p = (char*)str1;
	char* p2 = (char*)str2;
	
	while (*p) {
		p++;
	}
	while (*p++ = *p2++) {
		;
	}
	puts(str1);

	return 0;
}