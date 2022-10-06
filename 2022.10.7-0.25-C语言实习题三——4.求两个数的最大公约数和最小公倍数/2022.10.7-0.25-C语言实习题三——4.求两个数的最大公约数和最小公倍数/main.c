#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	/* 设b和b的最大公约数为Div，最小公倍数为Multi=a*b／Div;

    求最大公约数可用辗转相除法：rem=a%b; a=b;b=rem;若rem=0,b是最大公约数，程序结束；否则重新执行以上语句。*/
	int a, b;
	scanf("%d%d", &a, &b);
	int Div = 0;
	int Multi = a*b;
	int rem = 0;
	rem = a % b;
	while (rem) {
			a = b;
			b = rem;
			rem = a % b;
	}
	Div = b;
	Multi /= Div;

	printf("%d\n", Div);
	printf("%d\n", Multi);

	return 0;
}