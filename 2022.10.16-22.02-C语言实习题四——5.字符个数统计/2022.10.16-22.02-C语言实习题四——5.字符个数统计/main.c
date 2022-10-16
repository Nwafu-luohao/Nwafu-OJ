#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	char a[100];
	gets(a);
	char* p = (char *)a;
	int da = 0, xiao = 0, shu = 0, other = 0;
	while (*p != '\0')
	{
		if ((int)(*p) >= 48 && (int)(*p) <= 57) {
			shu++;
		}
		else if ((int)(*p) >= 65 && (int)(*p) <= 90) {
			da++;
		}
		else if ((int)(*p) >= 97 && (int)(*p) <= 122) {
			xiao++;
		}
		else
		{
			other++;
		}
		p++;
	}
	printf("%d %d %d %d\n", da, xiao, shu, other);
	
	return 0;
}