#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//  爱因斯坦阶梯问题。设有一阶梯，
//每步跨2阶，最后剩1阶；每步跨3阶，最后剩2阶；
//每步跨5阶，最后剩4阶；每步跨6阶，最后剩5阶；
//每步跨7阶，正好到阶梯顶。问满足条件的最少阶梯数是多少。

int main() {
	int i = 0;
	for (i = 7; ; i++) {
		if (i % 2 == 1 && i % 3 == 2 && i % 5 == 4 && i % 6 == 5 && i % 7 == 0) {
			break;
		}
	}
	printf("%d\n", i);

	return 0;
}