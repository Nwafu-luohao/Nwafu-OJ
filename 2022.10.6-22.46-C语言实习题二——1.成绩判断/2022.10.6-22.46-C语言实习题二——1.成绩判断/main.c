#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	float mark;
	scanf("%f", &mark);
	if(mark >= 60){
		printf("Pass\n");
		return 0;
	}
	printf("Fail\n");

	return 0;
}