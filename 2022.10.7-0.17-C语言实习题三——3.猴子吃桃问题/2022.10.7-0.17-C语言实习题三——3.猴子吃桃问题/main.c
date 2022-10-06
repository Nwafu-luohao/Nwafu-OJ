#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	//① 从最后一天的x = 1个，倒推出前一天的个数x，表达式可写为x = 2(x + 1)
	//② 将该表达式作为循环9次的循环体，并在该语句处设置断点, 进行观察即可。

	/*一只猴子吃桃子。第一天吃了这堆桃子的一半，觉得不过瘾，又多吃了一个，
	第2天接着吃了前一天剩下的一半，再多吃了一个，以后每天如此，
	经过N天后，只剩下1个桃子。若已知N的值，问最初这堆桃子共有多少只？*/
	int n = 0;
	int sum = 1;
	scanf("%d", &n);
	n--;
	while (n--) {
		sum = 2*(sum + 1);
	}
	printf("%d\n", sum);

	return 0;
}