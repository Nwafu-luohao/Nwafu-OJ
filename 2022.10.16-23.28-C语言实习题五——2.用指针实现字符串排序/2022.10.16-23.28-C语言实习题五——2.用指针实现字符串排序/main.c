#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char* arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = (char*)malloc(100 * sizeof(char));
		gets(arr[i]);
	}
	for (int i = 0; i < 10 - 1; i++) {
		for (int j = 0; j < 10 - 1 - i; j++) {
			if (strcmp(arr[j], arr[j + 1]) > 0) {
				char* p = NULL;
				p = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = p;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		puts(arr[i]);
		free(arr[i]);
	}

	return 0;
}