#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	char zfsour[100], zfdest[100];
	char* pzfsour = (char*)zfsour;
	char* pzfdest = NULL;
	scanf("%s", zfsour);
	int m, n;
	scanf("%d%d", &m, &n);
	pzfsour += m;
	pzfdest = pzfsour + n;

	int i = 0;
	for (pzfsour, i; pzfsour < pzfdest; pzfsour++,i++) {
		zfdest[i] = *pzfsour;
	}
	zfdest[i] = '\0';
	printf("%s\n",zfdest);

	return 0;
}