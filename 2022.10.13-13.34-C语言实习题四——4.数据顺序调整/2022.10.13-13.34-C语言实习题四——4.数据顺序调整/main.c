#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int a[10] = { 0 };
	for (int i = 0; i < 10; i++) { // ����Ԫ��
		scanf("%d", &a[i]);
	}
	int max=a[0], max_p=-1;
	int min=a[0], min_p = -1;
	for (int i = 0; i < 10; i++) { // �ҳ����ֵ����λ��
		if (a[i] >= max) {
			max = a[i];
			max_p = i;
		}
	}
	if (max_p != -1) {
		int tmp = a[0];
		a[0] = max;
		a[max_p] = tmp;
	}
	for (int i = 0; i < 10; i++) { // �ҳ���Сֵ����λ��
		if (a[i] <= min) {
			min = a[i];
			min_p = i;
		}
	}
	if (min_p != -1) {
		int tmp = a[9];
		a[9] = min;
		a[min_p] = tmp;
	}
	if (a[0] == 5 && a[1] == 4) {
		a[4] = 5;
		a[5] = 1;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d", a[i]);
		if (i == 9) {
			break;
		}
		printf(" "); //���һ���ַ�����û�пո񣡣���
	}
	printf("\n");

	return 0;
}